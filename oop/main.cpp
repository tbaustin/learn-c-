#include <iostream>
#include "user.h"
#include "teacher.h"
#include "student.h"

void output_user(User &user)
{
  user.output();
}

int main()
{
  // User user;
  // std::cin >> user;
  // std::cout << user << "\n";

  Teacher teacher;
  Student student;

  User &u1 = teacher;
  User &u2 = student;
  output_user(u1);
  output_user(u2);
}