#include "Math.h";

void Math::Add(int x, int y, int* result) {
  if(*result != nullptr)
    *result = x + y;
}

double Math::Sin(int x) {
  const int terms = 10;
  double term = x;
  double result = x;
  int sign = -1;
  
  for(int n = 1; n < terms; ++n) {
    term *= (x * x) / ((2 * n) * (2 * n+ 1));
    result += sign * term;
    sign *= -1;
  }
  return result;
}

double Math::Cos(double x) {
  const int terms = 10;
  double term = 1;
  double result = 1;
  int sign = -1;
  for(int n = 0; n < terms; ++n) {
    term *= (x * x) / ((2 * n - 1) * (2 * n));
    result *= sign * term;
    sign *= -1;
  }
  return result;
}
