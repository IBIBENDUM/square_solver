#ifndef COMPARE_WITH_ZERO_H_
#define COMPARE_WITH_ZERO_H_
#include <math.h>
// TODO: у тебя обычно include guard совпадает с названием файла
const double EPSILON = 1e-9;

// TODO: добавить пустые строки

double max(double x, double y);
double min(double x, double y);
void clear_buffer();
void init_equation_roots(struct Equation_roots *roots);
int  make_choice();
int  is_nan(double x);
int  compare_with_zero(double x);
int  compare_double(double x, double y);
// TODO: что произошло с отступами
#endif /*COMPARE_WITH_ZERO_H_*/
