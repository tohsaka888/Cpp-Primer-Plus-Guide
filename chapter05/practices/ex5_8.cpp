#include <cstring>
#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace std;
  int word_count = 0;
  char str[100];
  cout << "Enter a word (type 'done' to stop the program.): \n";

  do
  {
    cin >> str;

    if (strcmp(str, "done"))
    {
      word_count++;
    }
  } while (strcmp(str, "done"));

  cout << "You entered a total of " << word_count << " words.";

  return 0;
}
