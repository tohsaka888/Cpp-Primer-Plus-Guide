#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  double daphne_money = 100, cleo_money = 100;
  int year = 0;
  while (cleo_money <= daphne_money)
  {
    daphne_money += 10;
    cleo_money = 1.05 * cleo_money;
    year++;
  }
  cout << year << " years later." << endl;
  return 0;
}
