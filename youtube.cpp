#include <iostream>
#include <fstream>
#include <climits>
#include <limits>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>

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

void print_vector(std::vector<int> data)
{
  for (int i = 0; i < data.size(); i++)
  {
    std::cout << data[i];
    if (i == data.size() - 1)
    {
      break;
    }
    std::cout << ", ";
  }
  std::cout << std::endl;
}

void play_game()
{
  std::vector<int> guesses;

  int random = rand() % 11;
  int guess;
  std::cout << random << std::endl;
  while (guess != random)
  {
    std::cout << "Guess a number: ";
    std::cin >> guess;

    guesses.push_back(guess);
    if (guess == random)
    {
      std::cout << "You win!\n";
    }
    else if (guess < random)
    {
      std::cout << "To low\n";
    }
    else
    {
      std::cout << "To high\n";
    }
  }

  std::cout << "Your guesses: ";
  print_vector(guesses);
}

void init_game()
{
  // http://www.cplusplus.com/reference/cstdlib/srand/
  // "seeds" the rand() function so that each succession will be different
  // so if execution one returns 23, then execution two will never return 23 and so on
  // this works as long as the number is different each time srand() is called
  // time(NULL) seems to just get the current time which will obviously be different
  // every time it is called.
  srand(time(NULL));
  int choice;

  do
  {
    std::cout << "0. Quit\n1. Play Game\n";
    std::cin >> choice;
    switch (choice)
    {
    case 0:
      std::cout << "Thanks for nothing\n";
      break;
    case 1:
      play_game();
      break;
    }
  } while (choice != 0);
}

void print_array(int array[], int count)
{
  std::cout << array[count] << "\n";
}

void filling_array_with_user_input()
{
  const int SIZE = 10;
  int guesses[SIZE];
  int count;
  long maxStreamSize = std::numeric_limits<std::streamsize>::max();

  for (int i = 0; i < SIZE; i++)
  {
    if (std::cin >> guesses[i])
    {
      count++;
    }
    else
    {
      break;
    }
  }

  print_array(guesses, count);
  std::cin.clear();
  std::cin.ignore(maxStreamSize, '\n');
}

void print_vector_example(std::vector<int> &data) // adding & passes by reference (essentially the same array)
{
  for (int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

void print_template_array()
{
  std::array<int, 5> data = {1, 2, 3};

  for (int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

void range_based_for_loop()
{
  int data[] = {1, 2, 3, 4, 5, 6};

  for (int datum : data)
  {
    std::cout << datum << "\t";
  }

  std::cout << "\n";
}

int main()
{
}
