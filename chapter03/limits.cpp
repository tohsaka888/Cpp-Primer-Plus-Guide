// limits.cpp -- some interger limits
#include <iostream>
#include <climits>

int main()
{
  using namespace std;
  int n_int = INT_MAX;      // initialize n_int to max int value
  short n_short = SHRT_MAX; // symbols defined in climits file
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  // sizeof operator yields size of type or of variable
  cout << "int is " << sizeof(int) << " bytes." << endl;
  cout << "short is " << sizeof(short) << " bytes." << endl;
  cout << "long is " << sizeof(long) << " bytes." << endl;
  cout << "long long is " << sizeof(long long) << " bytes." << endl;
  cout << endl;

  cout << "Maximum int values:" << endl;
  cout << "int: " << n_int << endl;
  cout << "short: " << n_short << endl;
  cout << "long: " << n_long << endl;
  cout << "long long is " << n_llong << endl;

  cout << "Minimum int value = " << INT_MIN << endl;
  cout << "Bits per byte = " << CHAR_BIT << endl;
}