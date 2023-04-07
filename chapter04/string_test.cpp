#include <iostream>

int main(int argc, char const *argv[])
{
  char str[] = {'1', '2', '3', '4'};
  char str1[] = {'2', '2', '3', '4', 0};

  short size = 'S';

  std::cout << str << std::endl;
  std::cout << str1 << std::endl;
  // std::cout << size;

  std::cout << "I'd give my right arm to be" " a great violinist.\n";
  std::cout << "I'd give my right arm to be a great violinist.\n";
  std::cout << "I'd give my right ar" "m to be a great violinist.\n";

  return 0;
}
