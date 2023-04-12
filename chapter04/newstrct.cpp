#include <iostream>
struct inflatable
{
  char name[20];
  float volume;
  double price;
};
int main(int argc, char const *argv[])
{
  using namespace std;
  inflatable *ps = new inflatable; // allocate memory for inflatable
  cout << "Enter name of inflatable item: ";
  cin.getline(ps->name, 20);
  cout << "Enter volume in cubic feet: ";
  cin >> (*ps).volume;
  cout << "Enter price: $";
  cin >> ps->price;
  cout << "Name: " << (*ps).name << endl;
  cout << "Volume: " << ps->volume << " cube feet\n";
  cout << "Price: $" << ps->price << endl;
  delete ps;
  return 0;
}
