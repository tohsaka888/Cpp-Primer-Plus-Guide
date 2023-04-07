// hexoct1.cpp -- shows hex and octal literals
#include <iostream>
int main()
{
  using namespace std;
  int chest = 42;  // decimal integer literal
  int waist = 42;  // hexadecimal integer literal
  int inseam = 42; // octal integer literal

  cout << "Monsieur cuts a striking figure!\n";
  cout << "chest = " << chest << " (42 in decimal)\n";
  cout << hex;
  cout << "waist = " << waist << " (42 in hex)\n";
  cout << oct;
  cout << "inseam = " << inseam << " (42 in octal)\n";
}