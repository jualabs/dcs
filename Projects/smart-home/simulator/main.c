
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "allegro5/allegro_ttf.h"
#include "allegro5/allegro_font.h"
#include "main.h"

#define FPS 60.0
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_EVENT_QUEUE *event_queue = NULL;
ALLEGRO_TIMER *timer = NULL;

ALLEGRO_BITMAP *tv_sprite_sheet = NULL;
ALLEGRO_BITMAP *lamp_sprite_sheet = NULL;
ALLEGRO_BITMAP *window_sprite_sheet = NULL;
ALLEGRO_BITMAP *door_sprite_sheet = NULL;
ALLEGRO_BITMAP *management_sprite_sheet = NULL;
ALLEGRO_BITMAP *presence_sprite_sheet = NULL;
ALLEGRO_BITMAP *background = NULL;

ALLEGRO_FONT *font_type = NULL;

int initialize() {

  if (!al_init()){
    return 0;
  }

  if (!al_init_image_addon()){
    return 0;
  }

  timer = al_create_timer(1.0 / FPS);
  if(!timer) {
    return 0;
  }

  display = al_create_display(SCREEN_WIDTH, SCREEN_HEIGHT);
  
  //font_type = al_load_font("BRADHITC.TTF", 18, 0);
  al_set_window_title(display, "SmartEnvironment");
  
  if(!display) {
    al_destroy_timer(timer);
    return 0;
  }
  
  if (!al_install_mouse()) {
    al_destroy_timer(timer);
    al_destroy_timer(display);
  }

  event_queue = al_create_event_queue();
  if(!event_queue) {
    al_destroy_timer(timer);
    al_destroy_display(display);
    return 0;
  }

  tv_sprite_sheet = al_load_bitmap("images/sprite_tv.png");
  lamp_sprite_sheet = al_load_bitmap("images/sprite_light.png");
  door_sprite_sheet = al_load_bitmap("images/sprite_door.png");
  window_sprite_sheet = al_load_bitmap("images/sprite_window.png");
  management_sprite_sheet = al_load_bitmap("images/management.png");
  presence_sprite_sheet = al_load_bitmap("images/presence.png");
  background = al_load_bitmap("images/planta.png");

  if (!tv_sprite_sheet || !lamp_sprite_sheet || !door_sprite_sheet || !window_sprite_sheet
   || !management_sprite_sheet || !presence_sprite_sheet || !background){

    al_destroy_timer(timer);
    al_destroy_display(display);
    al_destroy_event_queue(event_queue);

    al_destroy_bitmap(tv_sprite_sheet);
    al_destroy_bitmap(lamp_sprite_sheet);
    al_destroy_bitmap(door_sprite_sheet);
    al_destroy_bitmap(window_sprite_sheet);
    al_destroy_bitmap(management_sprite_sheet);
    al_destroy_bitmap(presence_sprite_sheet);
    al_destroy_bitmap(background);

    return 0;
  }

  al_register_event_source(event_queue, al_get_display_event_source(display));
  al_register_event_source(event_queue, al_get_timer_event_source(timer));
  al_register_event_source(event_queue, al_get_mouse_event_source());
  al_start_timer(timer);

  return 1;
}

Smart_environment__controller_mem mem;
int main(int argc, char** argv) {

  if (!initialize()){
    return -1;
  }

  Smart_environment__controller_out _res;
  int step_c = 0;
  int step_max = 0;

  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };

  int drawing = 1;
  int exit = 0;

  int presence = 0;
  int eco = 0;
  int comfort = 0;

  int tv_sprite_height = al_get_bitmap_height(tv_sprite_sheet), tv_sprite_width = al_get_bitmap_width(tv_sprite_sheet)/2;
  int lamp_sprite_height = al_get_bitmap_height(lamp_sprite_sheet), lamp_sprite_width = al_get_bitmap_width(lamp_sprite_sheet)/2;
  int window_sprite_height = al_get_bitmap_height(window_sprite_sheet), window_sprite_width = al_get_bitmap_width(window_sprite_sheet)/2;
  int door_sprite_height = al_get_bitmap_height(door_sprite_sheet), door_sprite_width = al_get_bitmap_width(door_sprite_sheet)/2;
  int management_sprite_height = al_get_bitmap_height(management_sprite_sheet), management_sprite_width = al_get_bitmap_width(management_sprite_sheet)/3;
  int presence_sprite_height = al_get_bitmap_height(presence_sprite_sheet), presence_sprite_width = al_get_bitmap_width(presence_sprite_sheet)/2;

  int tv_sprite_x_region = tv_sprite_width, tv_sprite_y_region = 0;
  int lamp_sprite_x_region = lamp_sprite_width, lamp_sprite_y_region = 0;
  int window_sprite_x_region = window_sprite_width, window_sprite_y_region = 0;
  int door_sprite_x_region = door_sprite_width, door_sprite_y_region = 0;
  int management_sprite_x_region = 0, management_sprite_y_region = 0;
  int presence_sprite_x_region = presence_sprite_width, presence_sprite_y_region = 0;

  int pos_x_tv_sprite = 485, pos_y_tv_sprite = 40;
  int pos_x_lamp_sprite = 300, pos_y_lamp_sprite = 330;
  int pos_x_window_sprite = 698, pos_y_window_sprite = 100;
  int pos_x_door_sprite = 615, pos_y_door_sprite = 475;
  int pos_x_management_sprite = 120, pos_y_management_sprite = 10;
  int pos_x_presence_sprite = 120, pos_y_presence_sprite = 130;

  Smart_environment__controller_reset(&mem);

  while ((!(step_max)||(step_c<step_max)) || (!exit)) {

    step_c = (step_c + 1);
    ALLEGRO_EVENT event;
    al_wait_for_event(event_queue, &event);

    if(event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
      exit = 1;
    }

    Smart_environment__controller_step(0, 0, presence, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);

    if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {

      // printf("%d %d \n", event.mouse.x, event.mouse.y);

      // room_occupied
      if ((event.mouse.x > 130 && event.mouse.x < 180) && (event.mouse.y > 150 && event.mouse.y < 175)) {
        if (presence == 1) {

          presence = 0;
          Smart_environment__controller_step(0, 0, presence, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);

        }else {

          presence = 1;
          Smart_environment__controller_step(0, 0, presence, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);
        }

      }

      // Gerenciamento de energia
      if ((event.mouse.x > 130 && event.mouse.x < 180) && (event.mouse.y > 30 && event.mouse.y < 110)) {
        eco = 0;
        comfort = 0;

        Smart_environment__controller_step(0, 0, presence, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);

      }else if ((event.mouse.x > 190 && event.mouse.x < 240) && (event.mouse.y > 30 && event.mouse.y < 110)) {
        eco = 1;
        comfort = 0;
        
        Smart_environment__controller_step(0, 0, presence, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);
      }

      else if ((event.mouse.x > 250 && event.mouse.x < 300) && (event.mouse.y > 30 && event.mouse.y < 110)) {
        eco = 0;
        comfort = 1;

        Smart_environment__controller_step(0, 0, presence, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);
      }


      // tv
      if ((event.mouse.x > 520 && event.mouse.x < 600) && (event.mouse.y > 40 && event.mouse.y < 60)) {

        Smart_environment__controller_step(0, 0, presence, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);

      }

      // lamp
      if ((event.mouse.x > 415 && event.mouse.x < 435) && (event.mouse.y > 450 && event.mouse.y < 470)){
        Smart_environment__controller_step(0, 0, presence, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);
      }

      // window
      if ((event.mouse.x > 700 && event.mouse.x < 710) && (event.mouse.y > 100 && event.mouse.y < 300)) {
        Smart_environment__controller_step(0, 1, presence, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);
      }

      // door
      if ((event.mouse.x > 700 && event.mouse.x < 710) && (event.mouse.y > 480 && event.mouse.y < 580)) {
        Smart_environment__controller_step(1, 0, presence, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, eco, comfort, &_res, &mem);
      }

      // Radiator up1
      if ((event.mouse.x > 455 && event.mouse.x < 480) && (event.mouse.y > 495 && event.mouse.y < 505)) {
        Smart_environment__controller_step(0, 0, presence, 0, 0, 1,0, 0, 0,0, 0, 0,0, 0, 0,eco, comfort, &_res, &mem);
      }

      // Radiator down1
      if ((event.mouse.x > 445 && event.mouse.x < 480) && (event.mouse.y > 515 && event.mouse.y < 522)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0,1, 0, 0,0, 0, 0,0, 0, 0,eco, comfort, &_res, &mem);
      }

      // Radiator up2
      if ((event.mouse.x > 460 && event.mouse.x < 480) && (event.mouse.y > 530 && event.mouse.y < 540)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0,0, 1, 0,0, 0, 0,0, 0, 0,eco, comfort, &_res, &mem);
      }

      // Radiator down2
      if ((event.mouse.x > 445 && event.mouse.x < 480) && (event.mouse.y > 550 && event.mouse.y < 557)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0,0, 0, 1,0, 0, 0,0, 0, 0,eco, comfort, &_res, &mem);
      }

      // Washing start
      if ((event.mouse.x > 318 && event.mouse.x < 345) && (event.mouse.y > 520 && event.mouse.y < 530)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0,0, 0, 0,1, 0, 0,0, 0, 0,eco, comfort, &_res, &mem);
      }

      // Washing end
      if ((event.mouse.x > 318 && event.mouse.x < 345) && (event.mouse.y > 540 && event.mouse.y < 550)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0, 0, 0, 0,0, 1, 0,0, 0, 0,eco, comfort, &_res, &mem);
      }

      // Oven start
      if ((event.mouse.x > 285 && event.mouse.x < 322) && (event.mouse.y > 305 && event.mouse.y < 318)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0,0, 0, 0,0, 0, 1,0, 0, 0,eco, comfort, &_res, &mem);
      }

      // Oven finish
      if ((event.mouse.x > 285 && event.mouse.x < 325) && (event.mouse.y > 325 && event.mouse.y < 335)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0,0, 0, 0,0, 0, 0,1, 0, 0,eco, comfort, &_res, &mem);
      }

      // Oven cold
      if ((event.mouse.x > 285 && event.mouse.x < 325) && (event.mouse.y > 340 && event.mouse.y < 350)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0, 0, 0, 0,0, 0, 0,0, 0, 1,eco, comfort, &_res, &mem);
      }

      // Oven temp_ok
      if ((event.mouse.x > 285 && event.mouse.x < 350) && (event.mouse.y > 355 && event.mouse.y < 365)) {
        Smart_environment__controller_step(0, 0, presence,0, 0, 0,0, 0, 0,0, 0, 0,0, 1, 0,eco, comfort, &_res, &mem);
      }

      // Set frame of presence button
      if(_res.room_ocupied) {
        presence_sprite_x_region = 0;

      }else{            
        presence_sprite_x_region = presence_sprite_width;
      }

      // Set frame of tv sheet
      if(_res.tv_on) {
        tv_sprite_x_region = 0;
      }else{            
        tv_sprite_x_region = tv_sprite_width;
      }

      // Set frame of lamp sheet
      if(_res.lamp_on) {
        lamp_sprite_x_region = 0;
      }else{            
        lamp_sprite_x_region = lamp_sprite_width;
      }

      // Set frame of door sheet
      if(_res.door_open) {

        door_sprite_x_region = 0;

      }else{            

        door_sprite_x_region = door_sprite_width;
        
      }

      // Set frame of window sheet
      if(_res.window_open) {

        window_sprite_x_region = 0;

      }else{            

        window_sprite_x_region = window_sprite_width;

      }

      // Set frame of policy management sheet
      if(_res.policy_1 == 0 && _res.policy_2 == 0) {

        management_sprite_x_region = 0;

      } else if (_res.policy_1 == 1 && _res.policy_2 == 0) {            

        management_sprite_x_region = management_sprite_width;

      } else if (_res.policy_1 == 1 && _res.policy_2 == 1) {

        management_sprite_x_region = 2 * management_sprite_width;

      }

      printf("=> ");
      printf("presence: %d \n", _res.room_ocupied);
      printf("=> ");
      printf("door_open: %d \n", _res.door_open);
      printf("=> ");
      printf("window_open: %d \n", _res.window_open);
      printf("=> ");
      printf("lamp_on: %d \n", _res.lamp_on);
      printf("=> ");
      printf("tv_on: %d \n", _res.tv_on);
      printf("=> ");
      printf("rad_power: %d \n", _res.rad_power);
      printf("=> ");
      printf("rad_state: %d \n", _res.rad_state);
      printf("=> ");
      printf("washing_power: %d \n", _res.wash_power);
      printf("=> ");
      printf("washing_state: %d \n", _res.wash_state);
      printf("=> ");
      printf("oven_power: %d \n", _res.oven_power);
      printf("=> ");
      printf("oven_state: %d \n", _res.oven_state);
      printf("=> ");
      printf("policy 2: %d \n", _res.policy_2);
      printf("=> ");
      printf("policy 1: %d \n", _res.policy_1); 

      puts("");
      fflush(stdout);

      drawing = 1;
    }

    // Update screen
    if(drawing && al_is_event_queue_empty(event_queue)) {

      al_draw_bitmap_region(background, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0);

      al_draw_bitmap_region(tv_sprite_sheet, tv_sprite_x_region, tv_sprite_y_region, tv_sprite_width, tv_sprite_height,
        pos_x_tv_sprite, pos_y_tv_sprite, 0);

      al_draw_bitmap_region(lamp_sprite_sheet,lamp_sprite_x_region, lamp_sprite_y_region,
        lamp_sprite_width, lamp_sprite_height, pos_x_lamp_sprite, pos_y_lamp_sprite, 0);

      al_draw_bitmap_region(window_sprite_sheet, window_sprite_x_region, window_sprite_y_region,
        window_sprite_width, window_sprite_height, pos_x_window_sprite, pos_y_window_sprite, 0);

      al_draw_bitmap_region(door_sprite_sheet, door_sprite_x_region, door_sprite_y_region,
        door_sprite_width, door_sprite_height, pos_x_door_sprite, pos_y_door_sprite, 0);

      al_draw_bitmap_region(management_sprite_sheet, management_sprite_x_region, management_sprite_y_region,
        management_sprite_width, management_sprite_height, pos_x_management_sprite, pos_y_management_sprite, 0);

      al_draw_bitmap_region(presence_sprite_sheet, presence_sprite_x_region, presence_sprite_y_region,
        presence_sprite_width, presence_sprite_height, pos_x_presence_sprite, pos_y_presence_sprite, 0);

      al_flip_display();
      drawing = 0;
    }

  };

  al_destroy_bitmap(tv_sprite_sheet);
  al_destroy_bitmap(lamp_sprite_sheet);
  al_destroy_bitmap(door_sprite_sheet);
  al_destroy_bitmap(window_sprite_sheet);
  al_destroy_bitmap(management_sprite_sheet);
  al_destroy_bitmap(background);

  al_destroy_timer(timer);
  al_destroy_display(display);
  al_destroy_event_queue(event_queue);

  return 0;
}
