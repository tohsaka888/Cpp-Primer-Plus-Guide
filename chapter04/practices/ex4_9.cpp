#include <iostream>
#include <string>

struct CandyBar
{
  std::string band;
  float weight;
  int calorie;
};

int main(int argc, char const *argv[])
{
  using namespace std;
  CandyBar *snacks = new CandyBar[3]{
      {"Mocha Munch", 2.3, 350},
      {"Big Rabbit", 5, 300},
      {"Joy Boy", 4.1, 430}
  };
  for (size_t i = 0; i < 3; i++)
  {
    cout << "band: " << snacks[i].band << endl;
    cout << "weight: " << snacks[i].weight << endl;
    cout << "calorie: " << snacks[i].calorie << endl
         << endl;
  }

  delete[] snacks;
  return 0;
}
