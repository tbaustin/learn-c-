#ifndef USER_H
#define USER_H

class User
{
private:
  // vars
  std::string status = "Gold";
  static int user_count;

public:
  // vars
  static int get_user_count();
  std::string first_name;
  std::string last_name;

  // contructors
  User();
  User(std::string first_name, std::string last_name, std::string status);

  // destructors
  ~User();

  // methods
  std::string get_status();
  void set_status(std::string status);
  // virtual lets children classes override this func
  virtual void output();

  // friend functions with overloading
  friend std::ostream &operator<<(std::ostream &output, User user);
  friend std::istream &operator>>(std::istream &input, User &user);
};

#endif