#include <array>
#include <iostream>
const int MAX_SIZE = 100;

int main(int argc, char const *argv[])
{
  std::array<long double, MAX_SIZE> results;
  results[0] = 1;
  for (int i = 1; i < MAX_SIZE; i++)
  {
    results[i] = results[i - 1] * i;
    std::cout << i << "! = " << results[i] << std::endl;
  }
  return 0;
}
