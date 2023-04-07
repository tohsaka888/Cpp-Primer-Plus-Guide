#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  int height;
  const int ele = 12;
  cout << "Please enter your height(in): ";
  cin >> height;
  cout << "converted to: " << height / ele << " foot, and " << height % ele << " inches." << endl;
  return 0;
}
