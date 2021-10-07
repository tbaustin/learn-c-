// prevents the header file from including all the code more than once
// during the precompile stage
#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
  double length;
  double width;
};

namespace utilz
{
  double area(double length, double width);

  double area(double length);

  double area(Rectangle rectangle);

  double pow(double base, int pow = 2);
}

#endif