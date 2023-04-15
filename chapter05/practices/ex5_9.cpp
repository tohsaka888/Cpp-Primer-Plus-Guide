#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
  using namespace std;
  int word_count = 0;
  string str;
  cout << "Enter a word (type 'done' to stop the program.): \n";

  do
  {
    cin >> str;

    if (str != "done")
    {
      word_count++;
    }
  } while (str != "done");

  cout << "You entered a total of " << word_count << " words.";

  return 0;
}
