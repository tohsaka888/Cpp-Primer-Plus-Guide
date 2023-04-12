#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  int higgens = 5;
  int *ptr = &higgens;

  cout << "Variable of higgens = " << higgens
       << "; Address of higgens = " << &higgens << endl;
  cout << "Value of *ptr = " << *ptr
       << "; Value of ptr = " << ptr << endl;
  return 0;
}
