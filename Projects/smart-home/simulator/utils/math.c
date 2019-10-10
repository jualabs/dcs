
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "math.h"
#include <math.h>

void Math__float_step(int x, Math__float_out* _out) {
  _out->y = (float)x;
}

void Math__ceil_step(float x, Math__ceil_out* _out) {
  _out->y = ceilf(x);
}

void Math__floor_step(float x, Math__floor_out* _out) {
  _out->y = floorf(x);
}

void Math__sin_step(float x, Math__sin_out* _out) {
  _out->y = sinf(x);
}

void Math__cos_step(float x, Math__cos_out* _out) {
  _out->y = cosf(x);
}

void Math__tan_step(float x, Math__tan_out* _out) {
  _out->y = tanf(x);
}

void Math__asin_step(float x, Math__asin_out* _out) {
  _out->y = asinf(x);
}

void Math__acos_step(float x, Math__acos_out* _out) {
  _out->y = acosf(x);
}

void Math__atan_step(float x, Math__atan_out* _out) {
  _out->y = atanf(x);
}

void Math__min_float_step(float x, float y, Math__min_float_out* _out) {
  _out->z = (x < y)? x : y;
}

void Math__max_float_step(float x, float y, Math__max_float_out* _out) {
  _out->z = (x > y)? x : y;
}

