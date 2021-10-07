#include <iostream>
#include <vector>

void nested_vectors()
{
  std::vector<std::vector<int>> grades = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (int r = 0; r < 3; r++)
  {
    for (int c = 0; c < 3; c++)
    {
      std::cout << grades[r][c] << "\t";
    }

    std::cout << "\n";
  }
}

void do_something(const int array[])
{
}

namespace utilz
{
  void print_array(const int data[], int size)
  {
    for (int i = 0; i < size; i++)
    {
      std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    do_something(data);
  }
}

int main()
{
  int data[] = {1, 2, 3};
  utilz::print_array(data, 3);
}