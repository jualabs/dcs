/* --- Generated the 1/11/2018 at 10:8 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller smart_environment.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "smart_environment_types.h"

Smart_environment__st_16 Smart_environment__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_OPEN")==0)) {
    return Smart_environment__St_16_OPEN;
  };
  if ((strcmp(s, "St_16_CLOSED")==0)) {
    return Smart_environment__St_16_CLOSED;
  };
}

char* string_of_Smart_environment__st_16(Smart_environment__st_16 x,
                                         char* buf) {
  switch (x) {
    case Smart_environment__St_16_OPEN:
      strcpy(buf, "St_16_OPEN");
      break;
    case Smart_environment__St_16_CLOSED:
      strcpy(buf, "St_16_CLOSED");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_15 Smart_environment__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_OPEN")==0)) {
    return Smart_environment__St_15_OPEN;
  };
  if ((strcmp(s, "St_15_CLOSED")==0)) {
    return Smart_environment__St_15_CLOSED;
  };
}

char* string_of_Smart_environment__st_15(Smart_environment__st_15 x,
                                         char* buf) {
  switch (x) {
    case Smart_environment__St_15_OPEN:
      strcpy(buf, "St_15_OPEN");
      break;
    case Smart_environment__St_15_CLOSED:
      strcpy(buf, "St_15_CLOSED");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_14 Smart_environment__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_OCUPIED")==0)) {
    return Smart_environment__St_14_OCUPIED;
  };
  if ((strcmp(s, "St_14_EMPTY")==0)) {
    return Smart_environment__St_14_EMPTY;
  };
}

char* string_of_Smart_environment__st_14(Smart_environment__st_14 x,
                                         char* buf) {
  switch (x) {
    case Smart_environment__St_14_OCUPIED:
      strcpy(buf, "St_14_OCUPIED");
      break;
    case Smart_environment__St_14_EMPTY:
      strcpy(buf, "St_14_EMPTY");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_13 Smart_environment__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_ON")==0)) {
    return Smart_environment__St_13_ON;
  };
  if ((strcmp(s, "St_13_OFF")==0)) {
    return Smart_environment__St_13_OFF;
  };
}

char* string_of_Smart_environment__st_13(Smart_environment__st_13 x,
                                         char* buf) {
  switch (x) {
    case Smart_environment__St_13_ON:
      strcpy(buf, "St_13_ON");
      break;
    case Smart_environment__St_13_OFF:
      strcpy(buf, "St_13_OFF");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_12 Smart_environment__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_ON")==0)) {
    return Smart_environment__St_12_ON;
  };
  if ((strcmp(s, "St_12_OFF")==0)) {
    return Smart_environment__St_12_OFF;
  };
}

char* string_of_Smart_environment__st_12(Smart_environment__st_12 x,
                                         char* buf) {
  switch (x) {
    case Smart_environment__St_12_ON:
      strcpy(buf, "St_12_ON");
      break;
    case Smart_environment__St_12_OFF:
      strcpy(buf, "St_12_OFF");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_11 Smart_environment__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_OFF")==0)) {
    return Smart_environment__St_11_OFF;
  };
  if ((strcmp(s, "St_11_HIGH")==0)) {
    return Smart_environment__St_11_HIGH;
  };
  if ((strcmp(s, "St_11_FROST")==0)) {
    return Smart_environment__St_11_FROST;
  };
  if ((strcmp(s, "St_11_ECO")==0)) {
    return Smart_environment__St_11_ECO;
  };
}

char* string_of_Smart_environment__st_11(Smart_environment__st_11 x,
                                         char* buf) {
  switch (x) {
    case Smart_environment__St_11_OFF:
      strcpy(buf, "St_11_OFF");
      break;
    case Smart_environment__St_11_HIGH:
      strcpy(buf, "St_11_HIGH");
      break;
    case Smart_environment__St_11_FROST:
      strcpy(buf, "St_11_FROST");
      break;
    case Smart_environment__St_11_ECO:
      strcpy(buf, "St_11_ECO");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_10 Smart_environment__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_STANDBY")==0)) {
    return Smart_environment__St_10_STANDBY;
  };
  if ((strcmp(s, "St_10_REHEAT")==0)) {
    return Smart_environment__St_10_REHEAT;
  };
  if ((strcmp(s, "St_10_OFF")==0)) {
    return Smart_environment__St_10_OFF;
  };
  if ((strcmp(s, "St_10_MAINTAIN")==0)) {
    return Smart_environment__St_10_MAINTAIN;
  };
  if ((strcmp(s, "St_10_HEAT")==0)) {
    return Smart_environment__St_10_HEAT;
  };
}

char* string_of_Smart_environment__st_10(Smart_environment__st_10 x,
                                         char* buf) {
  switch (x) {
    case Smart_environment__St_10_STANDBY:
      strcpy(buf, "St_10_STANDBY");
      break;
    case Smart_environment__St_10_REHEAT:
      strcpy(buf, "St_10_REHEAT");
      break;
    case Smart_environment__St_10_OFF:
      strcpy(buf, "St_10_OFF");
      break;
    case Smart_environment__St_10_MAINTAIN:
      strcpy(buf, "St_10_MAINTAIN");
      break;
    case Smart_environment__St_10_HEAT:
      strcpy(buf, "St_10_HEAT");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_9 Smart_environment__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_WATER_FILL")==0)) {
    return Smart_environment__St_9_WATER_FILL;
  };
  if ((strcmp(s, "St_9_WASHING")==0)) {
    return Smart_environment__St_9_WASHING;
  };
  if ((strcmp(s, "St_9_STANDBY")==0)) {
    return Smart_environment__St_9_STANDBY;
  };
  if ((strcmp(s, "St_9_SPIN")==0)) {
    return Smart_environment__St_9_SPIN;
  };
  if ((strcmp(s, "St_9_RINSE")==0)) {
    return Smart_environment__St_9_RINSE;
  };
  if ((strcmp(s, "St_9_OFF")==0)) {
    return Smart_environment__St_9_OFF;
  };
}

char* string_of_Smart_environment__st_9(Smart_environment__st_9 x, char* buf) {
  switch (x) {
    case Smart_environment__St_9_WATER_FILL:
      strcpy(buf, "St_9_WATER_FILL");
      break;
    case Smart_environment__St_9_WASHING:
      strcpy(buf, "St_9_WASHING");
      break;
    case Smart_environment__St_9_STANDBY:
      strcpy(buf, "St_9_STANDBY");
      break;
    case Smart_environment__St_9_SPIN:
      strcpy(buf, "St_9_SPIN");
      break;
    case Smart_environment__St_9_RINSE:
      strcpy(buf, "St_9_RINSE");
      break;
    case Smart_environment__St_9_OFF:
      strcpy(buf, "St_9_OFF");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_8 Smart_environment__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_MINIMAL_SAFETY")==0)) {
    return Smart_environment__St_8_MINIMAL_SAFETY;
  };
  if ((strcmp(s, "St_8_ECO")==0)) {
    return Smart_environment__St_8_ECO;
  };
  if ((strcmp(s, "St_8_COMFORT")==0)) {
    return Smart_environment__St_8_COMFORT;
  };
}

char* string_of_Smart_environment__st_8(Smart_environment__st_8 x, char* buf) {
  switch (x) {
    case Smart_environment__St_8_MINIMAL_SAFETY:
      strcpy(buf, "St_8_MINIMAL_SAFETY");
      break;
    case Smart_environment__St_8_ECO:
      strcpy(buf, "St_8_ECO");
      break;
    case Smart_environment__St_8_COMFORT:
      strcpy(buf, "St_8_COMFORT");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_7 Smart_environment__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_WATER_FILL")==0)) {
    return Smart_environment__St_7_WATER_FILL;
  };
  if ((strcmp(s, "St_7_WASHING")==0)) {
    return Smart_environment__St_7_WASHING;
  };
  if ((strcmp(s, "St_7_STANDBY")==0)) {
    return Smart_environment__St_7_STANDBY;
  };
  if ((strcmp(s, "St_7_SPIN")==0)) {
    return Smart_environment__St_7_SPIN;
  };
  if ((strcmp(s, "St_7_RINSE")==0)) {
    return Smart_environment__St_7_RINSE;
  };
  if ((strcmp(s, "St_7_OFF")==0)) {
    return Smart_environment__St_7_OFF;
  };
}

char* string_of_Smart_environment__st_7(Smart_environment__st_7 x, char* buf) {
  switch (x) {
    case Smart_environment__St_7_WATER_FILL:
      strcpy(buf, "St_7_WATER_FILL");
      break;
    case Smart_environment__St_7_WASHING:
      strcpy(buf, "St_7_WASHING");
      break;
    case Smart_environment__St_7_STANDBY:
      strcpy(buf, "St_7_STANDBY");
      break;
    case Smart_environment__St_7_SPIN:
      strcpy(buf, "St_7_SPIN");
      break;
    case Smart_environment__St_7_RINSE:
      strcpy(buf, "St_7_RINSE");
      break;
    case Smart_environment__St_7_OFF:
      strcpy(buf, "St_7_OFF");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_6 Smart_environment__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_ON")==0)) {
    return Smart_environment__St_6_ON;
  };
  if ((strcmp(s, "St_6_OFF")==0)) {
    return Smart_environment__St_6_OFF;
  };
}

char* string_of_Smart_environment__st_6(Smart_environment__st_6 x, char* buf) {
  switch (x) {
    case Smart_environment__St_6_ON:
      strcpy(buf, "St_6_ON");
      break;
    case Smart_environment__St_6_OFF:
      strcpy(buf, "St_6_OFF");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_5 Smart_environment__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_OPEN")==0)) {
    return Smart_environment__St_5_OPEN;
  };
  if ((strcmp(s, "St_5_CLOSED")==0)) {
    return Smart_environment__St_5_CLOSED;
  };
}

char* string_of_Smart_environment__st_5(Smart_environment__st_5 x, char* buf) {
  switch (x) {
    case Smart_environment__St_5_OPEN:
      strcpy(buf, "St_5_OPEN");
      break;
    case Smart_environment__St_5_CLOSED:
      strcpy(buf, "St_5_CLOSED");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_4 Smart_environment__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_OPEN")==0)) {
    return Smart_environment__St_4_OPEN;
  };
  if ((strcmp(s, "St_4_CLOSED")==0)) {
    return Smart_environment__St_4_CLOSED;
  };
}

char* string_of_Smart_environment__st_4(Smart_environment__st_4 x, char* buf) {
  switch (x) {
    case Smart_environment__St_4_OPEN:
      strcpy(buf, "St_4_OPEN");
      break;
    case Smart_environment__St_4_CLOSED:
      strcpy(buf, "St_4_CLOSED");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_3 Smart_environment__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_OCUPIED")==0)) {
    return Smart_environment__St_3_OCUPIED;
  };
  if ((strcmp(s, "St_3_EMPTY")==0)) {
    return Smart_environment__St_3_EMPTY;
  };
}

char* string_of_Smart_environment__st_3(Smart_environment__st_3 x, char* buf) {
  switch (x) {
    case Smart_environment__St_3_OCUPIED:
      strcpy(buf, "St_3_OCUPIED");
      break;
    case Smart_environment__St_3_EMPTY:
      strcpy(buf, "St_3_EMPTY");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_2 Smart_environment__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_OFF")==0)) {
    return Smart_environment__St_2_OFF;
  };
  if ((strcmp(s, "St_2_HIGH")==0)) {
    return Smart_environment__St_2_HIGH;
  };
  if ((strcmp(s, "St_2_FROST")==0)) {
    return Smart_environment__St_2_FROST;
  };
  if ((strcmp(s, "St_2_ECO")==0)) {
    return Smart_environment__St_2_ECO;
  };
}

char* string_of_Smart_environment__st_2(Smart_environment__st_2 x, char* buf) {
  switch (x) {
    case Smart_environment__St_2_OFF:
      strcpy(buf, "St_2_OFF");
      break;
    case Smart_environment__St_2_HIGH:
      strcpy(buf, "St_2_HIGH");
      break;
    case Smart_environment__St_2_FROST:
      strcpy(buf, "St_2_FROST");
      break;
    case Smart_environment__St_2_ECO:
      strcpy(buf, "St_2_ECO");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st_1 Smart_environment__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_STANDBY")==0)) {
    return Smart_environment__St_1_STANDBY;
  };
  if ((strcmp(s, "St_1_REHEAT")==0)) {
    return Smart_environment__St_1_REHEAT;
  };
  if ((strcmp(s, "St_1_OFF")==0)) {
    return Smart_environment__St_1_OFF;
  };
  if ((strcmp(s, "St_1_MAINTAIN")==0)) {
    return Smart_environment__St_1_MAINTAIN;
  };
  if ((strcmp(s, "St_1_HEAT")==0)) {
    return Smart_environment__St_1_HEAT;
  };
}

char* string_of_Smart_environment__st_1(Smart_environment__st_1 x, char* buf) {
  switch (x) {
    case Smart_environment__St_1_STANDBY:
      strcpy(buf, "St_1_STANDBY");
      break;
    case Smart_environment__St_1_REHEAT:
      strcpy(buf, "St_1_REHEAT");
      break;
    case Smart_environment__St_1_OFF:
      strcpy(buf, "St_1_OFF");
      break;
    case Smart_environment__St_1_MAINTAIN:
      strcpy(buf, "St_1_MAINTAIN");
      break;
    case Smart_environment__St_1_HEAT:
      strcpy(buf, "St_1_HEAT");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__st Smart_environment__st_of_string(char* s) {
  if ((strcmp(s, "St_MINIMAL_SAFETY")==0)) {
    return Smart_environment__St_MINIMAL_SAFETY;
  };
  if ((strcmp(s, "St_ECO")==0)) {
    return Smart_environment__St_ECO;
  };
  if ((strcmp(s, "St_COMFORT")==0)) {
    return Smart_environment__St_COMFORT;
  };
}

char* string_of_Smart_environment__st(Smart_environment__st x, char* buf) {
  switch (x) {
    case Smart_environment__St_MINIMAL_SAFETY:
      strcpy(buf, "St_MINIMAL_SAFETY");
      break;
    case Smart_environment__St_ECO:
      strcpy(buf, "St_ECO");
      break;
    case Smart_environment__St_COMFORT:
      strcpy(buf, "St_COMFORT");
      break;
    default:
      break;
  };
  return buf;
}

Smart_environment__modes Smart_environment__modes_of_string(char* s) {
  if ((strcmp(s, "Minimal")==0)) {
    return Smart_environment__Minimal;
  };
  if ((strcmp(s, "Eco")==0)) {
    return Smart_environment__Eco;
  };
  if ((strcmp(s, "Comfort")==0)) {
    return Smart_environment__Comfort;
  };
}

char* string_of_Smart_environment__modes(Smart_environment__modes x,
                                         char* buf) {
  switch (x) {
    case Smart_environment__Minimal:
      strcpy(buf, "Minimal");
      break;
    case Smart_environment__Eco:
      strcpy(buf, "Eco");
      break;
    case Smart_environment__Comfort:
      strcpy(buf, "Comfort");
      break;
    default:
      break;
  };
  return buf;
}

