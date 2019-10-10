/* --- Generated the 1/11/2018 at 10:8 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller smart_environment.ept --- */

#ifndef SMART_ENVIRONMENT_H
#define SMART_ENVIRONMENT_H

#include "smart_environment_types.h"
#include "../controller/controller_controller.h"
typedef struct Smart_environment__management_policy_mem {
  int v_139;
  int v_138;
  int pnr;
} Smart_environment__management_policy_mem;

typedef struct Smart_environment__management_policy_out {
  int mode_2;
  int mode_1;
} Smart_environment__management_policy_out;

void Smart_environment__management_policy_reset(Smart_environment__management_policy_mem* self);

void Smart_environment__management_policy_step(int eco_input,
                                               int comfort_input,
                                               Smart_environment__management_policy_out* _out,
                                               Smart_environment__management_policy_mem* self);

typedef struct Smart_environment__oven_mem {
  int v_178;
  int v_177;
  int v_176;
  int pnr;
} Smart_environment__oven_mem;

typedef struct Smart_environment__oven_out {
  int s1;
  int p1;
} Smart_environment__oven_out;

void Smart_environment__oven_reset(Smart_environment__oven_mem* self);

void Smart_environment__oven_step(int f, int s, int c, int cold, int temp_ok,
                                  Smart_environment__oven_out* _out,
                                  Smart_environment__oven_mem* self);

typedef struct Smart_environment__radiator_mem {
  int v_210;
  int v_209;
  int pnr;
} Smart_environment__radiator_mem;

typedef struct Smart_environment__radiator_out {
  int s1;
  int p1;
} Smart_environment__radiator_out;

void Smart_environment__radiator_reset(Smart_environment__radiator_mem* self);

void Smart_environment__radiator_step(int u1, int d1, int u2, int d2, int c1,
                                      int c2, int c3,
                                      Smart_environment__radiator_out* _out,
                                      Smart_environment__radiator_mem* self);

typedef struct Smart_environment__room_mem {
  int ck_1;
  int pnr;
} Smart_environment__room_mem;

typedef struct Smart_environment__room_out {
  int r1;
} Smart_environment__room_out;

void Smart_environment__room_reset(Smart_environment__room_mem* self);

void Smart_environment__room_step(int presence,
                                  Smart_environment__room_out* _out,
                                  Smart_environment__room_mem* self);

typedef struct Smart_environment__door_mem {
  int ck_1;
  int pnr;
} Smart_environment__door_mem;

typedef struct Smart_environment__door_out {
  int door_open;
} Smart_environment__door_out;

void Smart_environment__door_reset(Smart_environment__door_mem* self);

void Smart_environment__door_step(int push, int c,
                                  Smart_environment__door_out* _out,
                                  Smart_environment__door_mem* self);

typedef struct Smart_environment__window_mem {
  int ck_1;
  int pnr;
} Smart_environment__window_mem;

typedef struct Smart_environment__window_out {
  int window_open;
} Smart_environment__window_out;

void Smart_environment__window_reset(Smart_environment__window_mem* self);

void Smart_environment__window_step(int push, int c,
                                    Smart_environment__window_out* _out,
                                    Smart_environment__window_mem* self);

typedef struct Smart_environment__lamp_mem {
  int ck_1;
  int pnr;
} Smart_environment__lamp_mem;

typedef struct Smart_environment__lamp_out {
  int lamp_on;
} Smart_environment__lamp_out;

void Smart_environment__lamp_reset(Smart_environment__lamp_mem* self);

void Smart_environment__lamp_step(int turn_on, int c1, int c2,
                                  Smart_environment__lamp_out* _out,
                                  Smart_environment__lamp_mem* self);

typedef struct Smart_environment__washing_machine_mem {
  int v_255;
  int v_254;
  int v_253;
  int pnr;
} Smart_environment__washing_machine_mem;

typedef struct Smart_environment__washing_machine_out {
  int s1;
  int p1;
} Smart_environment__washing_machine_out;

void Smart_environment__washing_machine_reset(Smart_environment__washing_machine_mem* self);

void Smart_environment__washing_machine_step(int e, int s, int c,
                                             Smart_environment__washing_machine_out* _out,
                                             Smart_environment__washing_machine_mem* self);

typedef struct Smart_environment__controller_mem {
  int v_293;
  int v_292;
  int v_338;
  int v_337;
  int v_336;
  int v_395;
  int v_394;
  int v_393;
  int v_427;
  int v_426;
  int ck_17_1;
  int ck_15_1;
  int ck_13_1;
  int ck_11_1;
  int ck_9_1;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Smart_environment__controller_mem;

typedef struct Smart_environment__controller_out {
  int room_ocupied;
  int door_open;
  int window_open;
  int lamp_on;
  int tv_on;
  int rad_power;
  int rad_state;
  int wash_power;
  int wash_state;
  int oven_power;
  int oven_state;
  int policy_2;
  int policy_1;
} Smart_environment__controller_out;

void Smart_environment__controller_reset(Smart_environment__controller_mem* self);

void Smart_environment__controller_step(int push_door, int push_window,
                                        int room_presence, int lamp_switch,
                                        int tv_switch, int rad_up1,
                                        int rad_down1, int rad_up2,
                                        int rad_down2, int wash_start,
                                        int wash_end, int oven_start,
                                        int oven_finish, int oven_temp_ok,
                                        int oven_cold, int eco_input,
                                        int comfort_input,
                                        Smart_environment__controller_out* _out,
                                        Smart_environment__controller_mem* self);

#endif // SMART_ENVIRONMENT_H
