#include <iostream>
#include <string>
struct Car
{
  std::string manufacturer;
  int year;
};

int main(int argc, char const *argv[])
{
  using namespace std;
  int length;
  cout << "How many cars do you wish to catalog? ";
  cin >> length;
  Car *cars = new Car[length];

  for (int i = 0; i < length; i++)
  {
    cin.get();
    cout << "Car: #" << i + 1 << ":" << endl;
    cout << "Please enter the make: ";
    getline(cin, (cars + i)->manufacturer);
    cout << "Please enter the year made: ";
    cin >> (cars + i)->year;
  }

  cout << "Here is your collection:" << endl;

  for (int i = 0; i < length; i++)
  {
    cout << (cars + 1)->year << " " << (cars + i)->manufacturer << endl;
  }

  delete[] cars;
  return 0;
}
