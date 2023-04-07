#include <iostream>

void convert_to_time(double seconds);

int main(int argc, char const *argv[])
{
  using namespace std;
  int seconds;
  cout << "Enter the number of seconds: ";
  cin >> seconds;

  convert_to_time(seconds);
  return 0;
}

void convert_to_time(double sec)
{
  using namespace std;
  int days, hours, minutes, seconds;
  const int day_const = 60 * 60 * 24;
  const int hour_const = 60 * 60;
  days = sec / day_const;
  int temp_seconds = int(sec) % day_const;
  hours = temp_seconds / hour_const;
  temp_seconds = temp_seconds % hour_const;
  minutes = temp_seconds / 60;
  seconds = temp_seconds % 60;

  cout << int(sec) << " seconds = "
       << days << " days, "
       << hours << " hours, "
       << minutes << " minutes, "
       << seconds << " seconds" << endl;
}
