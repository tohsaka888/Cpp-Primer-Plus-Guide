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
  CandyBar snake = {"Mocha Munch", 2.3, 350};
  cout << "snake band: " << snake.band << endl;
  cout << "snake weight: " << snake.weight << endl;
  cout << "snake calorie: " << snake.calorie << endl;
  return 0;
}
