#include <iostream>

struct Rectangle
{
  double length;
  double width;
};

double area(double length, double width) // rectangle
{
  return length * width;
}

double area(double length) // square
{
  return length * length;
}

double area(Rectangle rectangle)
{
  return rectangle.length * rectangle.width;
}

double pow(double base, int pow = 2)
{
  int total = 1;
  for (int i = 0; i < pow; i++)
  {
    total *= base;
  }
  return total;
}

int main()
{
  // Rectangle rectangle;
  // rectangle.length = 10;
  // rectangle.width = 10;

  // std::cout << area(rectangle.length, rectangle.width) << std::endl;

  // std::cout << area(rectangle.length) << std::endl;

  // std::cout << area(rectangle) << std::endl;

  std::cout << pow(3, 3) << std::endl;
  std::cout << pow(3) << std::endl;
}