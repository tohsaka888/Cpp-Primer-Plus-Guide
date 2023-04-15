#include <array>
#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
  using namespace std;
  array<string, 12> months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  array<int, 12> sales;
  int sum = 0, i = 0;

  for (int i = 0; i < months.size(); i++)
  {
    cout << months[i] << "\'s sales: ";
    cin >> sales[i];
    sum += sales[i];
  }
  cout << "The sum sales is " << sum << endl;
  return 0;
}
