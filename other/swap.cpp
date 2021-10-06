#include <iostream>
#include <string>

// & passes by reference so you keep and can modify the original value
void swap(int &a, int &b)
{

  int temp = a;
  a = b;
  b = temp;
}

void swap(std::string &a, std::string &b)
{
  std::string temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 10;
  int b = 20;

  swap(a, b);

  std::string first_name = "Taylor";
  std::string last_name = "Austin";

  swap(first_name, last_name);
  std::cout << first_name << " " << last_name << std::endl;
}