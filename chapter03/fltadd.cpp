#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  float a = 2.34e22f;
  float b = a + 1.0f;

  cout << "a = " << a << endl;
  cout << "b = " << b - a << endl;
  return 0;
}
