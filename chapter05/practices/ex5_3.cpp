#include <iostream>

int main(int argc, char const *argv[])
{
  int num, sum = 0;
  std::cout << "Please input a number.Enter 0 to exit." << std::endl;
  std::cin >> num;
  while (num != 0)
  {
    sum += num;
    std::cout << "Now the sum is " << sum << std::endl;
    std::cin >> num;
  }

  return 0;
}
