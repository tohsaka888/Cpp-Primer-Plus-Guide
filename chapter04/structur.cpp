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
  inflatable guest = {"Glorious Gloria", 1.88, 29.99};
  inflatable pal = {"Audacious Arthur", 3.12, 32.99};
  // NOTE: some implementations requires using static
  cout << "Expand your guest list with " << guest.name;
  cout << " and " << pal.name << "!\n";
  // pal.name is the name member of the pal variable
  cout << "You can have both for $";
  cout << guest.price + pal.price << "!\n";
  return 0;
}
