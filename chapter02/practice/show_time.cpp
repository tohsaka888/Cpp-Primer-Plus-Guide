// show_time.cpp
#include <iostream>

void show_time(int hours, int mins);

int main()
{
  int hours, mins;
  std::cout << "Enter the number of hours: ";
  std::cin >> hours;
  std::cout << "Enter the number of mins: ";
  std::cin >> mins;

  show_time(hours, mins);
}

void show_time(int hours, int mins)
{
  if (hours >= 24 || hours <= 0)
  {
    std::cout << "Error input of hour!";
  }
  else if (mins >= 60 || mins <= 0)
  {
    std::cout << "Error input of minute!";
  }
  else
  {
    std::cout << "Time: " << hours << ":" << mins << std::endl;
  }
}