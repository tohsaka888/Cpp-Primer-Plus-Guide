// custom_functions.cpp
#include <iostream>

void show_message_1();
void show_message_2();

int main()
{
  show_message_1();
  show_message_1();
  show_message_2();
  show_message_2();
}

void show_message_1()
{
  std::cout << "Three blind mice." << std::endl;
}

void show_message_2()
{
  std::cout << "See how they run." << std::endl;
}