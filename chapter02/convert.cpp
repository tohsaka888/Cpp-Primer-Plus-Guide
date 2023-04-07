// convert.cpp -- converts stone to pounds
#include <iostream>

int stone_to_pounds(int);

int main()
{
  using namespace std;
  int stone;
  cout << "Enter the weight in stone: ";
  cin >> stone;
  int pounds = stone_to_pounds(stone);
  cout << stone << " stone = ";
  cout << pounds << " pounds." << endl;
}

int stone_to_pounds(int stone)
{
  return 14 * stone;
}