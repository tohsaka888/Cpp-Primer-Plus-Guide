// convert_distence.cpp
#include <iostream>

int convert_distence(int distence);

int main()
{
  int distence;
  std::cout << "please input a distence: ";
  std::cin >> distence;
  std::cout << "convert to: " << convert_distence(distence) << " yard" << std::endl;
}

int convert_distence(int distence)
{
  return distence * 220;
}