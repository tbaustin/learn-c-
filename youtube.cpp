#include <iostream>
#include <climits>
#include <cmath>
#include <string>

using std::cin;
using std::cout;

double power(double base, int exponent)
{
  double result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result = result * base;
  }
  return result;
}

void print_pow(double base, int exponent)
{
  double myPower = power(base, exponent);
  cout << base << " raised to the " << exponent << " power is " << myPower << ".\n";
}

void print_vars()
{
  short a;
  int b;
  long c;
  long long d;
  // short <= int <= long <= long long
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;

  cout << SHRT_MAX << std::endl;
}

void print_booleans()
{
  bool found = true;

  cout << std::boolalpha << found << std::endl;
}

void print_const()
{
  const int xylaphone = 5;
  enum
  {
    y = 100,
    x = 100,
  };

  cout << "Vars: " << x << y << xylaphone;
}

void some_math_funcs()
{
  std::cout << trunc(fmin(10, 3.25)) << std::endl;
}

void string_stuff()
{
  std::string greeting = "hello";
  std::string complete_greeting = greeting + " there";
  complete_greeting += "!";
  std::cout << complete_greeting << std::endl;
  std::cout << complete_greeting.length() << std::endl;
}

void get_line()
{
  std::string greeting;
  std::cout << "Hi there how are you?" << std::endl;
  getline(std::cin, greeting);
  std::cout << greeting << std::endl;
}

void string_methods()
{
  std::string greeting = "hello world!";
  greeting += " I'm ready to go!";
  greeting.append(" What about you?");
  greeting.insert(2, " he he he");
  greeting.erase(greeting.length() - 1);
  greeting.replace(2, 9, "");
  greeting.insert(greeting.length(), "?");
  std::cout << greeting << std::endl;
  std::cout << "Size: " << greeting.size() << std::endl;
  std::cout << "Length: " << greeting.length() << std::endl;
}

void other_string_stuff_with_if_statements()
{
  std::string greeting = "What the hell?";
  std::string bad_string = "hell";
  int index = greeting.find(bad_string);
  greeting.replace(index, bad_string.size(), "****");

  std::string greeting_two = "What is up?";
  int first_of = greeting.find_first_of("aieuo");

  //npos == -1
  if (greeting.find_first_of("!") == -1)
  {
    std::cout << "NOT FOUND!" << std::endl;
  }

  if (greeting == "What the ****?")
  {
    std::cout << "Equals" << std::endl;
  }

  std::cout << first_of << std::endl;
}

void auto_const()
{
  // auto x = 5U;

  // std::cout << x << std::endl;
}

void hex_and_oct()
{
  int number = 30;

  std::cout << std::hex << number << std::endl;
  std::cout << std::oct << number << std::endl;
}

void order_of_operations()
{
  double x;
  double y;
  x = 10;
  y = x = 100;

  std::cout << x << std::endl;
  std::cout << y << std::endl;
}

void branching()
{
  int age = 20;

  if (age > 18)
  {
    std::cout << "You can play the game!" << std::endl;
  }
  else if (age > 12)
  {
    std::cout << "You can play the PG version of the game!" << std::endl;
  }
  else
  {
    std::cout << "I think you are a little to young for the game :/" << std::endl;
  }

  switch (age)
  {
  case 17:
    std::cout << "you are kinda young" << std::endl;
    break;

  default:
    std::cout << "cool you are " << age << " years old!" << std::endl;
    break;
  }

  // enum class Season
  // {
  //   summer,
  //   spring,
  //   fall,
  //   winter
  // };
  // Season now = Season::winter;
  // if (now == Season::winter)
  // {
  //   std::cout << "hello winter" << std::endl;
  // }
}

void looping()
{
  /* 
    * I: Initialize
    * C: Condition
    * U: Update
  */

  int i = 0;
  while (i < 10)
  {
    std::cout << i << std::endl;
    i++;
  }

  for (int i = 0; i < 10; i++)
  {
    std::cout << i << std::endl;
  }

  std::string password = "hellotacos123";
  std::string guess;
  do
  {
    std::cout << "Guess the password: ";
    std::cin >> guess;
  } while (guess != password);
}

void break_and_continue()
{
  std::string sentence = "Hello my name is Taylor";
  for (int i = 0; i < sentence.length(); i++)
  {
    if (sentence[i] == 'o')
    {
      continue;
    }
    std::cout << sentence[i] << std::endl;
    if (sentence[i] == 'T')
    {
      break;
    }
  }
}

void ternary_operator()
{
  int answer = 11;
  std::cout << "Guess the number: ";
  int guess;
  std::cin >> guess;
  int points = guess == answer ? 10 : 0;
  std::cout << "Your Points: " << points << std::endl;
}

int main()
{
}
