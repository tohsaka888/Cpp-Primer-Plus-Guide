#include <iostream>
#include <string>

struct Student
{
  std::string first_name;
  std::string last_name;
  char grade;
  int age;
};

int main(int argc, char const *argv[])
{
  using namespace std;
  Student stu;
  cout << "What is your first name? ";
  getline(cin, stu.first_name);
  cout << "What is your last name? ";
  getline(cin, stu.last_name);
  cout << "What letter grade do you deserve? ";
  cin >> stu.grade;
  cout << "What is your age? ";
  cin >> stu.age;

  cout << "Name: " << stu.last_name << ", " << stu.first_name << endl;
  cout << "Grade: " << char(stu.grade + 1) << endl;
  cout << "Age: " << stu.age << endl;
  return 0;
}
