#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  int rows = 0;
  cout << "Enter number of rows: ";
  cin >> rows;
  for (int i = 1; i <= rows; i++)
  {
    for (int j = rows; j > i; j--)
    {
      cout << ".";
    }

    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
