#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name:\n";
  cin.getline(name, ArSize); // reads through newline
  cout << "Enter your favorite dessert:\n";
  cin.getline(dessert, ArSize); // reads through newline
  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";
  return 0;
}
