#include <iostream>

struct antarctica_years_endpoint
{
  int year;
};

int main(int argc, char const *argv[])
{
  antarctica_years_endpoint s01, s02, s03;
  s01.year = 1998;
  antarctica_years_endpoint *pa = &s02;
  pa->year = 1999;
  antarctica_years_endpoint trio[3];
  trio[0].year = 2003;
  std::cout << trio->year << std::endl;
  antarctica_years_endpoint *arp[3] = {&s01, &s02, &s03};
  std::cout << arp[1]->year << std::endl;
  antarctica_years_endpoint **ppa = arp;
  auto ppb = arp;
  std::cout << (*ppa)->year << std::endl;
  std::cout << (*(ppb + 1))->year << std::endl;
  return 0;
}
