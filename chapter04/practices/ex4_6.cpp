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
  CandyBar snacks[3] = {{"test1", 2.4, 100}, {"test2", 2.5, 11}, {"test3", 2.6, 5}};
  for (size_t i = 0; i < 3; i++)
  {
    cout << "band: " << snacks[i].band << endl;
    cout << "weight: " << snacks[i].weight << endl;
    cout << "calorie: " << snacks[i].calorie << endl
         << endl;
  }

  return 0;
}
