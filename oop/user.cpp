#include <iostream>
#include <vector>
#include "user.h"

// vars
int User::get_user_count()
{
  return user_count;
}

// contructors
User::User()
{
  user_count++;
  // std::cout << "Constructor\n";
}

User::User(std::string first_name, std::string last_name, std::string status)
{
  user_count++;
  this->first_name = first_name;
  this->last_name = last_name;
  this->status = status;
}

// destructors
User::~User()
{
  user_count--;
  // std::cout << "Destructor\n";
}

// methods
std::string User::get_status()
{
  return status;
}

void User::set_status(std::string status)
{
  if (status == "Gold" || status == "Silver" || status == "Bronze")
  {
    this->status = status;
  }
  else
  {
    this->status = "No Status";
  }
}

std::ostream &operator<<(std::ostream &output, User user);
std::istream &operator>>(std::istream &input, User &user);

// declare user_count init value must be outside of class
int User::user_count = 0;

std::ostream &operator<<(std::ostream &output, User user)
{
  output << "First name: " << user.first_name << "\nLast name: " << user.last_name << "\nStatus: " << user.status;
  return output;
}

std::istream &operator>>(std::istream &input, User &user)
{
  input >> user.first_name >> user.last_name >> user.status;
  return input;
}