// convert_age_to_months.cpp
#include <iostream>

int convert_age_to_months(int age);

int main()
{
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cout << "contains " << convert_age_to_months(age) << " months" << std::endl;
}

int convert_age_to_months(int age)
{
  return age * 12;
}