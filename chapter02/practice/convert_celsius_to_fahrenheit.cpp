// convert_celsius_to_fahrenheit.cpp
#include <iostream>

double convert_celsius_to_fahrenheit(double celsius);

int main()
{
  int celsius;
  std::cout << "Please enter a Celsius value: ";
  std::cin >> celsius;

  std::cout << celsius
            << " degrees Celsius is "
            << convert_celsius_to_fahrenheit(celsius)
            << " degrees Fahrenheit."
            << std::endl;
  return 0;
}

double convert_celsius_to_fahrenheit(double celsius)
{
  return 1.8 * celsius + 32.0;
}