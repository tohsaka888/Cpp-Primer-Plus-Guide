#include <iostream>
int main(int argc, char const *argv[])
{
  using namespace std;
  int n;

  cout << "Enter numbers in the range 1-10 to find ";
  cout << "my favorite number\n";
  do
  {
    cin >> n;
  } while (n != 7);
  cout << "Yes, 7 is my favorite number.\n";
  return 0;
}
