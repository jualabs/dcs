/* --- Generated the 30/6/2016 at 13:35 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. mar. 17 14:0:21 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s global global2.ept --- */

#include <sys/types.h>
#ifndef _WIN32
#include <sys/select.h>
#include <sys/socket.h>
#else
#include <winsock2.h>
#endif
#include <string.h>
#include <microhttpd.h>
#include <stdio.h>
#include <stdlib.h>
#include "_main.h"

#define PORT 8082
#define n 57

Global2__global_mem mem;
int glob_cnt=0;

struct item
{
    const char *key;
    const char *value;
};

struct item dict[n];

int save_items (void *cls, enum MHD_ValueKind kind, 
                   const char *key, const char *value)
{
  dict[glob_cnt].key = key; 
  dict[glob_cnt].value = value;
  glob_cnt += 1;
  return MHD_YES;
}

static int
answer_to_connection (void *cls, struct MHD_Connection *connection,
                      const char *url, const char *method,
                      const char *version, const char *upload_data,
                      size_t *upload_data_size, void **con_cls)
{
  char *json = malloc( 10000 );
  struct MHD_Response *response;
  int ret;
  MHD_get_connection_values(connection, MHD_GET_ARGUMENT_KIND, &save_items, NULL);
  printf("Counter:%d \n", glob_cnt);
  glob_cnt = 0;
  
  int step_c;
  int step_max;
  
  int emergency = 0;
  int daybreak = 0;
  int warm = 0;
  int presence_students = 0;
  int presence_class = 0;
  int presence_hall = 0;
  int presence_wc = 0;
  int ac1_onoff_students = 0;
  int ac2_onoff_students = 0;
  int ac1_onoff_class = 0;
  int ac2_onoff_class = 0;
  int ac1_onoff_hall = 0;
  int ac2_onoff_hall = 0;
  int lp_up1_students = 0;
  int lp_up2_students = 0;
  int lp_down1_students = 0;
  int lp_down2_students = 0;
  int lp_up1_class = 0;
  int lp_up2_class = 0;
  int lp_down1_class = 0;
  int lp_down2_class = 0;
  int lp_up1_hall = 0;
  int lp_up2_hall = 0;
  int lp_down1_hall = 0;
  int lp_down2_hall = 0;
  int comp1_sw_on_students = 0;
  int comp1_sw_off_students = 0;
  int comp1_sw_on_class = 0;
  int comp1_sw_off_class = 0;
  int leak_wc = 0;
  int turn_wc = 0;

  Global2__global_out _res;
  int i;
  for(i= 0; i < n; i++)
  {
    if (strcmp(dict[i].key, "emergency") == 0)
    {
      emergency = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "daybreak") == 0)
    {
      daybreak = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "warm") == 0)
    {
      warm = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "presence_students") == 0)
    {
      presence_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "presence_class") == 0)
    {
      presence_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "presence_hall") == 0)
    {
      presence_hall = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "presence_wc") == 0)
    {
      presence_wc = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "ac1_onoff_students") == 0)
    {
      ac1_onoff_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "ac2_onoff_students") == 0)
    {
      ac2_onoff_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "ac1_onoff_class") == 0)
    {
      ac1_onoff_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "ac2_onoff_class") == 0)
    {
      ac2_onoff_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "ac1_onoff_hall") == 0)
    {
      ac1_onoff_hall = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "ac2_onoff_hall") == 0)
    {
      ac2_onoff_hall = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_up1_students") == 0)
    {
      lp_up1_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_up2_students") == 0)
    {
      lp_up2_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_down1_students") == 0)
    {
      lp_down1_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_down2_students") == 0)
    {
      lp_down2_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_up1_class") == 0)
    {
      lp_up1_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_up2_class") == 0)
    {
      lp_up2_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_down1_class") == 0)
    {
      lp_down1_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_down2_class") == 0)
    {
      lp_down2_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_up1_hall") == 0)
    {
      lp_up1_hall = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_up2_hall") == 0)
    {
      lp_up2_hall = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_down1_hall") == 0)
    {
      lp_down1_hall = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "lp_down2_hall") == 0)
    {
      lp_down2_hall = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "comp1_sw_on_students") == 0)
    {
      comp1_sw_on_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "comp1_sw_off_students") == 0)
    {
      comp1_sw_off_students = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "comp1_sw_on_class") == 0)
    {
      comp1_sw_on_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "comp1_sw_off_class") == 0)
    {
      comp1_sw_off_class = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "leak_wc") == 0)
    {
      leak_wc = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "turn_wc") == 0)
    {
      turn_wc = atoi(dict[i].value);
    }
    else
    {
      printf("Not implemented %s\n", dict[i].key);
    }
  }
  
  for(i= 0; i < n; i++)
  {
    printf("%s, %s\n",dict[i].key, dict[i].value);
  }  
  
  Global2__global_step(emergency, daybreak, warm, presence_students,
                     presence_class, presence_hall, presence_wc,
                     ac1_onoff_students, ac2_onoff_students, ac1_onoff_class,
                     ac2_onoff_class, ac1_onoff_hall, ac2_onoff_hall,
                     lp_up1_students, lp_up2_students, lp_down1_students,
                     lp_down2_students, lp_up1_class, lp_up2_class,
                     lp_down1_class, lp_down2_class, lp_up1_hall,
                     lp_up2_hall, lp_down1_hall, lp_down2_hall,
                     comp1_sw_on_students, comp1_sw_off_students,
                     comp1_sw_on_class, comp1_sw_off_class, &_res, &mem);

  char aux[1];
  
  strcat(json, "{");
  strcat(json, "\'ac1_status_students\':");
  sprintf(aux, "%d", _res.ac1_status_students);
  strcat(json, aux);
  
  strcat(json, ",\'ac2_status_students\':");
  sprintf(aux, "%d", _res.ac2_status_students);
  strcat(json, aux);
  
  strcat(json, ",\'ac1_status_class\':");
  sprintf(aux, "%d", _res.ac1_status_class);
  strcat(json, aux);
  
  strcat(json, ",\'ac2_status_class\':");
  sprintf(aux, "%d", _res.ac2_status_class);
  strcat(json, aux);

  strcat(json, ",\'ac1_status_hall\':");
  sprintf(aux, "%d", _res.ac1_status_hall);
  strcat(json, aux);
  
  strcat(json, ",\'ac2_status_hall\':");
  sprintf(aux, "%d", _res.ac2_status_hall);
  strcat(json, aux);

  strcat(json, ",\'lamp_on_students\':");
  sprintf(aux, "%d", _res.lamp_on_students);
  strcat(json, aux);
  
  strcat(json, ",\'lamp_on_class\':");
  sprintf(aux, "%d", _res.lamp_on_class);
  strcat(json, aux);

  strcat(json, ",\'lamp_on_hall\':");
  sprintf(aux, "%d", _res.lamp_on_hall);
  strcat(json, aux);
  
  strcat(json, ",\'lamp_on_wc\':");
  sprintf(aux, "%d", _res.lamp_on_wc);
  strcat(json, aux);
  
  strcat(json, ",\'shutter_opened_students\':");
  sprintf(aux, "%d", _res.shutter_opened_students);
  strcat(json, aux);
  
  strcat(json, ",\'shutter_opened_class\':");
  sprintf(aux, "%d", _res.shutter_opened_class);
  strcat(json, aux);
  
  strcat(json, ",\'shutter_opened_hall\':");
  sprintf(aux, "%d", _res.shutter_opened_hall);
  strcat(json, aux);
  
  strcat(json, ",\'lp_dark_students\':");
  sprintf(aux, "%d", _res.lp_dark_students);
  strcat(json, aux);
  
  strcat(json, ",\'lp_lit_students\':");
  sprintf(aux, "%d", _res.lp_lit_students);
  strcat(json, aux);
  
  strcat(json, ",\'lp_well_lit_students\':");
  sprintf(aux, "%d", _res.lp_well_lit_students);
  strcat(json, aux);
  
  strcat(json, ",\'lp_dark_hall\':");
  sprintf(aux, "%d", _res.lp_dark_hall);
  strcat(json, aux);
  
  strcat(json, ",\'lp_lit_hall\':");
  sprintf(aux, "%d", _res.lp_lit_hall);
  strcat(json, aux);
  
  strcat(json, ",\'lp_well_lit_hall\':");
  sprintf(aux, "%d", _res.lp_well_lit_hall);
  strcat(json, aux);
  
  strcat(json, ",\'lp_dark_class\':");
  sprintf(aux, "%d", _res.lp_dark_class);
  strcat(json, aux);
  
  strcat(json, ",\'lp_lit_class\':");
  sprintf(aux, "%d", _res.lp_lit_class);
  strcat(json, aux);
  
  strcat(json, ",\'lp_well_lit_class\':");
  sprintf(aux, "%d", _res.lp_well_lit_class);
  strcat(json, aux);
  
  strcat(json, ",\'comp1_off_students\':");
  sprintf(aux, "%d", _res.comp1_off_students);
  strcat(json, aux);
  
  strcat(json, ",\'comp1_inuse_students\':");
  sprintf(aux, "%d", _res.comp1_inuse_students);
  strcat(json, aux);
  
  strcat(json, ",\'comp1_susp_students\':");
  sprintf(aux, "%d", _res.comp1_susp_students);
  strcat(json, aux);
  
  strcat(json, ",\'comp1_off_class\':");
  sprintf(aux, "%d", _res.comp1_off_class);
  strcat(json, aux);
  
  strcat(json, ",\'comp1_inuse_class\':");
  sprintf(aux, "%d", _res.comp1_inuse_class);
  strcat(json, aux);
  
  strcat(json, ",\'comp1_susp_class\':");
  sprintf(aux, "%d", _res.comp1_susp_class);
  strcat(json, aux);
  
  strcat(json, ",\'watersupply_wc\':");
  //sprintf(aux, "%d", _res.watersupply_wc);
  sprintf(aux, "%d", 1);
  strcat(json, aux);
    
  strcat(json, "}");
  
  printf("%s\n",json);
  
  response =
  MHD_create_response_from_buffer (strlen (json), (void *) json, 
				     MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);
  MHD_destroy_response (response);

  return ret;
}

int main(int argc, char** argv) {
  
  struct MHD_Daemon *daemon;
  
  Global2__global_reset(&mem);
  
  int i;
  for(i= 0; i < n; i++)
  {
    dict[i].key = "";
    dict[i].value = "";
  }

  daemon = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY, PORT, NULL, NULL,
                             &answer_to_connection, NULL, MHD_OPTION_END);
  if (NULL == daemon)
    return 1;

  (void) getchar ();

  MHD_stop_daemon (daemon);
  return 0;
}

