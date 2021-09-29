#include <iostream>
#include <fstream>
#include <vector>

void output_file()
{
  std::string filename;
  std::cout << "Choose a filename: ";
  std::cin >> filename;

  std::ofstream file;
  file.open(filename.c_str(), std::ios::app);

  if (file.is_open())
  {
    std::cout << "success n00b\n";
  }

  std::vector<std::string> names;
  names.push_back("Amie");
  names.push_back("Izzy");
  names.push_back("Nala");

  for (std::string name : names)
  {
    file << name << std::endl;
  }

  file.close();
}

int main()
{
  std::ifstream file("tacos.txt");

  std::vector<char> names;

  char input;
  while (file >> input) // return file , this will keep reading the file till nothing remains
  {
    names.push_back(input);
  }

  for (char name : names)
  {
    std::cout << name << std::endl;
  }
}