#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  int min, max, sum = 0;
  cout << "Please input the minimum value: ";
  cin >> min;
  cout << "Please input the maximum value: ";
  cin >> max;
  for (int i = min; i <= max; i++)
  {
    sum += i;
  }
  cout << "The sum is " << sum << endl;
  return 0;
}
