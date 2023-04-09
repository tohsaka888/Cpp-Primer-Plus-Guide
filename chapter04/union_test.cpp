#include <iostream>
#include <string>

struct widget
{
  std::string brand;
  int type;
  union
  {
    long id_num;
    char id_char[20];
  } id_val;
} prize;

int main(int argc, char const *argv[])
{
  using namespace std;
  cin >> prize.type;
  if (prize.type == 1)
    cin >> prize.id_val.id_num;
  else
    cin >> prize.id_val.id_char;
  return 0;
}
