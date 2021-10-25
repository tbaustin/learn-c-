#ifndef TEACHER_H
#define TEACHER_H

#include <vector>
#include <string>
#include "user.h"

class Teacher : public User
{
public:
  // vars
  std::vector<std::string> classes_teaching;

  // methods
  void output();
};

#endif