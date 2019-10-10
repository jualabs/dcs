/* --- Generated the 1/11/2018 at 10:8 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller smart_environment.ept --- */

#ifndef SMART_ENVIRONMENT_TYPES_H
#define SMART_ENVIRONMENT_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "../utils/pervasives.h"
#include "../controller/controller_controller.h"
typedef enum {
  Smart_environment__St_16_OPEN,
  Smart_environment__St_16_CLOSED
} Smart_environment__st_16;

Smart_environment__st_16 Smart_environment__st_16_of_string(char* s);

char* string_of_Smart_environment__st_16(Smart_environment__st_16 x,
                                         char* buf);

typedef enum {
  Smart_environment__St_15_OPEN,
  Smart_environment__St_15_CLOSED
} Smart_environment__st_15;

Smart_environment__st_15 Smart_environment__st_15_of_string(char* s);

char* string_of_Smart_environment__st_15(Smart_environment__st_15 x,
                                         char* buf);

typedef enum {
  Smart_environment__St_14_OCUPIED,
  Smart_environment__St_14_EMPTY
} Smart_environment__st_14;

Smart_environment__st_14 Smart_environment__st_14_of_string(char* s);

char* string_of_Smart_environment__st_14(Smart_environment__st_14 x,
                                         char* buf);

typedef enum {
  Smart_environment__St_13_ON,
  Smart_environment__St_13_OFF
} Smart_environment__st_13;

Smart_environment__st_13 Smart_environment__st_13_of_string(char* s);

char* string_of_Smart_environment__st_13(Smart_environment__st_13 x,
                                         char* buf);

typedef enum {
  Smart_environment__St_12_ON,
  Smart_environment__St_12_OFF
} Smart_environment__st_12;

Smart_environment__st_12 Smart_environment__st_12_of_string(char* s);

char* string_of_Smart_environment__st_12(Smart_environment__st_12 x,
                                         char* buf);

typedef enum {
  Smart_environment__St_11_OFF,
  Smart_environment__St_11_HIGH,
  Smart_environment__St_11_FROST,
  Smart_environment__St_11_ECO
} Smart_environment__st_11;

Smart_environment__st_11 Smart_environment__st_11_of_string(char* s);

char* string_of_Smart_environment__st_11(Smart_environment__st_11 x,
                                         char* buf);

typedef enum {
  Smart_environment__St_10_STANDBY,
  Smart_environment__St_10_REHEAT,
  Smart_environment__St_10_OFF,
  Smart_environment__St_10_MAINTAIN,
  Smart_environment__St_10_HEAT
} Smart_environment__st_10;

Smart_environment__st_10 Smart_environment__st_10_of_string(char* s);

char* string_of_Smart_environment__st_10(Smart_environment__st_10 x,
                                         char* buf);

typedef enum {
  Smart_environment__St_9_WATER_FILL,
  Smart_environment__St_9_WASHING,
  Smart_environment__St_9_STANDBY,
  Smart_environment__St_9_SPIN,
  Smart_environment__St_9_RINSE,
  Smart_environment__St_9_OFF
} Smart_environment__st_9;

Smart_environment__st_9 Smart_environment__st_9_of_string(char* s);

char* string_of_Smart_environment__st_9(Smart_environment__st_9 x, char* buf);

typedef enum {
  Smart_environment__St_8_MINIMAL_SAFETY,
  Smart_environment__St_8_ECO,
  Smart_environment__St_8_COMFORT
} Smart_environment__st_8;

Smart_environment__st_8 Smart_environment__st_8_of_string(char* s);

char* string_of_Smart_environment__st_8(Smart_environment__st_8 x, char* buf);

typedef enum {
  Smart_environment__St_7_WATER_FILL,
  Smart_environment__St_7_WASHING,
  Smart_environment__St_7_STANDBY,
  Smart_environment__St_7_SPIN,
  Smart_environment__St_7_RINSE,
  Smart_environment__St_7_OFF
} Smart_environment__st_7;

Smart_environment__st_7 Smart_environment__st_7_of_string(char* s);

char* string_of_Smart_environment__st_7(Smart_environment__st_7 x, char* buf);

typedef enum {
  Smart_environment__St_6_ON,
  Smart_environment__St_6_OFF
} Smart_environment__st_6;

Smart_environment__st_6 Smart_environment__st_6_of_string(char* s);

char* string_of_Smart_environment__st_6(Smart_environment__st_6 x, char* buf);

typedef enum {
  Smart_environment__St_5_OPEN,
  Smart_environment__St_5_CLOSED
} Smart_environment__st_5;

Smart_environment__st_5 Smart_environment__st_5_of_string(char* s);

char* string_of_Smart_environment__st_5(Smart_environment__st_5 x, char* buf);

typedef enum {
  Smart_environment__St_4_OPEN,
  Smart_environment__St_4_CLOSED
} Smart_environment__st_4;

Smart_environment__st_4 Smart_environment__st_4_of_string(char* s);

char* string_of_Smart_environment__st_4(Smart_environment__st_4 x, char* buf);

typedef enum {
  Smart_environment__St_3_OCUPIED,
  Smart_environment__St_3_EMPTY
} Smart_environment__st_3;

Smart_environment__st_3 Smart_environment__st_3_of_string(char* s);

char* string_of_Smart_environment__st_3(Smart_environment__st_3 x, char* buf);

typedef enum {
  Smart_environment__St_2_OFF,
  Smart_environment__St_2_HIGH,
  Smart_environment__St_2_FROST,
  Smart_environment__St_2_ECO
} Smart_environment__st_2;

Smart_environment__st_2 Smart_environment__st_2_of_string(char* s);

char* string_of_Smart_environment__st_2(Smart_environment__st_2 x, char* buf);

typedef enum {
  Smart_environment__St_1_STANDBY,
  Smart_environment__St_1_REHEAT,
  Smart_environment__St_1_OFF,
  Smart_environment__St_1_MAINTAIN,
  Smart_environment__St_1_HEAT
} Smart_environment__st_1;

Smart_environment__st_1 Smart_environment__st_1_of_string(char* s);

char* string_of_Smart_environment__st_1(Smart_environment__st_1 x, char* buf);

typedef enum {
  Smart_environment__St_MINIMAL_SAFETY,
  Smart_environment__St_ECO,
  Smart_environment__St_COMFORT
} Smart_environment__st;

Smart_environment__st Smart_environment__st_of_string(char* s);

char* string_of_Smart_environment__st(Smart_environment__st x, char* buf);

typedef enum {
  Smart_environment__Minimal,
  Smart_environment__Eco,
  Smart_environment__Comfort
} Smart_environment__modes;

Smart_environment__modes Smart_environment__modes_of_string(char* s);

char* string_of_Smart_environment__modes(Smart_environment__modes x,
                                         char* buf);

#endif // SMART_ENVIRONMENT_TYPES_H
