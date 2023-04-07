// convert_light_years_to_astronmical_years.cpp
#include <iostream>

double convert_light_years_to_astronmical_years(double light_years);

int main()
{
  double light_years;
  std::cout << "Enter the number of years: ";
  std::cin >> light_years;
  std::cout << light_years
            << " light years = "
            << convert_light_years_to_astronmical_years(light_years)
            << " astronomical units.";
}

double convert_light_years_to_astronmical_years(double light_years)
{
  return 63240 * light_years;
}