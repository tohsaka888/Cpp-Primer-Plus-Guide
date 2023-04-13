#include <cstring>
#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  char first_name[20], last_name[20];
  cout << "Enter your first name: ";
  cin.getline(first_name, 20);
  cout << "Enter your last name: ";
  cin.getline(last_name, 20);
  cout << "Here's the information in a single string: "
       << strcat(strcat(last_name, ", "), first_name);

  return 0;
}
