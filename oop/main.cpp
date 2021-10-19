#include <iostream>
#include <vector>

class User
{
private:
  // vars
  std::string status = "Gold";
  static int user_count;

public:
  // vars
  static int get_user_count()
  {
    return user_count;
  }
  std::string first_name;
  std::string last_name;

  // contructors
  User()
  {
    user_count++;
    // std::cout << "Constructor\n";
  }

  User(std::string first_name, std::string last_name, std::string status)
  {
    user_count++;
    this->first_name = first_name;
    this->last_name = last_name;
    this->status = status;
  }

  // destructors
  ~User()
  {
    user_count--;
    // std::cout << "Destructor\n";
  }

  // methods
  std::string get_status()
  {
    return status;
  }

  void set_status(std::string status)
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
};

int User::user_count = 0;

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
  User user, user1, user2, user3, user4;
  std::cout << "User Count: " << User::get_user_count() << std::endl;
  user.~User();
  std::cout << "User Count: " << User::get_user_count() << std::endl;
}