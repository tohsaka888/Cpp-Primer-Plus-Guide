#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  double wages[3] = {1000.0, 2000.0, 3000.0};
  short stacks[3] = {3, 2, 1};

  // here are two ways to get the address of an array
  double *pw = wages;
  short *ps = &stacks[0];

  // with array elements
  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  pw = pw + 1;
  cout << "add 1 to the pw pointer:\n";
  cout << "pw = " << pw << ", *pw = " << *pw << endl
       << endl;
  cout << "ps = " << ps << ", *ps = " << *ps << endl;
  ps = ps + 1;
  cout << "add 1 to the ps pointer:\n";
  cout << "ps = " << ps << ", *ps = " << *ps << endl
       << endl;
  cout << "access two elements with array notation:" << endl;
  cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
  cout << "access two elements with pointer notation:" << endl;
  cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

  cout << sizeof(wages) << " = size of wages array" << endl;
  cout << sizeof(pw) << " = size of pw pointer" << endl;
  return 0;
}
