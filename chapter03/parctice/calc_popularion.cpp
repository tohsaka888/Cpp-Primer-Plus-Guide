#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  long long gloabl, usa;
  cout << "Enter the world's population: ";
  cin >> gloabl;
  cout << "Enter the population of the US: ";
  cin >> usa;
  cout << "The population of the US is "
       << double (usa) / double (gloabl) * 100
       << "% of the world's population.";
  return 0;
}
