#include <iostream>
#include <string>

struct Pizza
{
  std::string company_name;
  int d;
  int weight;
};

int main(int argc, char const *argv[])
{
  using namespace std;
  Pizza *pizza = new Pizza;
  cout << "Please input pizza's d: ";
  cin >> pizza->d;
  cin.get();
  cout << "Please input pizza's company name: ";
  getline(cin, pizza->company_name);
  cout << "Please input pizza's weight: ";
  cin >> pizza->weight;

  cout << "company name: " << pizza->company_name << endl;
  cout << "d: " << pizza->d << endl;
  cout << "weight: " << pizza->weight << endl;

  delete pizza;
  return 0;
}
