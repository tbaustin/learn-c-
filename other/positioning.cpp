#include <iostream>

class Position
{
private:
  int z = 0;
  int w = 0;

public:
  int x = 10;
  int y = 20;

  Position() {}

  Position(int x, int y)
  {
    this->x = x;
    this->y = y;
  }

  // pos + pos2, right side will be passed in as an arg while left side is the class instance
  // meaning it will have the value of x,y or this->x, this->y
  // this is "overloading" the + operator. Essentially just a built in func in c++
  Position operator+(Position pos)
  {
    Position new_pos;
    new_pos.x = this->x + pos.x;
    new_pos.y = this->y + pos.y;
    return new_pos;
  }

  // same thing with overloading except with ==
  bool operator==(Position pos)
  {
    if (this->x == pos.x && this->y == pos.y)
    {
      return true;
    }
    return false;
  }
};

int main()
{
  Position pos1(20, 40), pos2;
  Position pos3 = pos1 + pos2;

  if (pos1 == pos2)
  {
    std::cout << "They are the same!\n";
    std::cout << "Yay!\n";
  }
  else
  {
    std::cout << "They are not the same\n";
    std::cout << "Boo!\n";
  }

  std::cout << "x: " << pos3.x << " y: " << pos3.y << std::endl;
}