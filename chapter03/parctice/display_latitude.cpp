#include <iostream>

double calc_degrees(double deg, double min, double sec);

int main(int argc, char const *argv[])
{
  using namespace std;
  double deg, min, sec;
  cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
  cout << "First, enter the degrees: ";
  cin >> deg;
  cout << "Next, enter the minutes of arc: ";
  cin >> min;
  cout << "Finally, enter the seconds of arc: ";
  cin >> sec;
  cout << deg << " degrees, "
       << min << " minutes, "
       << sec << " seconds = "
       << calc_degrees(deg, min, sec) << " degrees" << endl;

  return 0;
}

double calc_degrees(double deg, double min, double sec)
{
  return deg + (min / 60) + (sec / 60 / 60);
}