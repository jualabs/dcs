
#ifndef MATH_H
#define MATH_H


typedef struct Math__float_out {
  float y;
} Math__float_out;

void Math__float_step(int x, Math__float_out* _out);

typedef struct Math__ceil_out {
  float y;
} Math__ceil_out;

void Math__ceil_step(float x, Math__ceil_out* _out);

typedef struct Math__floor_out {
  float y;
} Math__floor_out;

void Math__floor_step(float x, Math__floor_out* _out);

typedef struct Math__sin_out {
  float y;
} Math__sin_out;

void Math__sin_step(float x, Math__sin_out* _out);

typedef struct Math__cos_out {
  float y;
} Math__cos_out;

void Math__cos_step(float x, Math__cos_out* _out);

typedef struct Math__tan_out {
  float y;
} Math__tan_out;

void Math__tan_step(float x, Math__tan_out* _out);

typedef struct Math__asin_out {
  float y;
} Math__asin_out;

void Math__asin_step(float x, Math__asin_out* _out);

typedef struct Math__acos_out {
  float y;
} Math__acos_out;

void Math__acos_step(float x, Math__acos_out* _out);

typedef struct Math__atan_out {
  float y;
} Math__atan_out;

void Math__atan_step(float x, Math__atan_out* _out);

typedef struct Math__min_float_out {
  float z;
} Math__min_float_out;

void Math__min_float_step(float x, float y, Math__min_float_out* _out);

typedef struct Math__max_float_out {
  float z;
} Math__max_float_out;

void Math__max_float_step(float x, float y, Math__max_float_out* _out);

#endif // MATH_H
