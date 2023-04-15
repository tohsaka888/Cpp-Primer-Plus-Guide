#include <array>
#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
  using namespace std;
  array<array<string, 12>, 3> months = {{{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"},
                                         {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"},
                                         {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}}};
  array<int, 12> sales;
  int sum = 0, i = 0;

  for (int i = 0; i < months.size(); i++)
  {
    sum = 0;
    array<int, 12> sales;
    cout << "No." << i + 1 << " year:" << endl;
    for (size_t j = 0; j < months[i].size(); j++)
    {
      cout << "No." << j + 1 << " month: ";
      cin >> sales[j];
      sum += sales[j];
    }
    cout << "The sum of No." << i + 1 << " year is " << sum << endl
         << endl;
  }
  return 0;
}
