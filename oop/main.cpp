#include <iostream>
#include <vector>

class User
{
private:
  // vars
  std::string status = "Gold";

public:
  // vars
  std::string first_name;
  std::string last_name;

  // contructors
  User()
  {
    std::cout << "Constructor\n";
  }

  User(std::string first_name, std::string last_name, std::string status)
  {
    this->first_name = first_name;
    this->last_name = last_name;
    this->status = status;
  }

  // destructors
  ~User()
  {
    std::cout << "Destructor\n";
  }

  // methods
  std::string get_status()
  {
    return status;
  }
};

int add_user_if_not_exists(std::vector<User> &users, User user)
{
  for (int i = 0; i < users.size(); i++)
  {
    if (users[i].first_name == user.first_name &&
        users[i].last_name == user.last_name)
    {
      std::cout << "User Already Exist" << std::endl;
      return i;
      break;
    }
  }

  std::cout << "Add new user" << std::endl;
  users.push_back(user);
  return users.size() - 1;
}

int main()
{
  User user("Taylor", "Austin", "Silver");

  std::cout << user.first_name << " " << user.last_name << std::endl;
  std::cout << user.get_status() << std::endl;
}