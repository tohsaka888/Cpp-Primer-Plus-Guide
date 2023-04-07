// ourfunc.cpp -- define your own function

#include <iostream>

// function prototype for simon()
void simon(int);

int main()
{
  using namespace std;
  // call the simon() function
  simon(3);
  cout << "Pick an integer" << endl;
  int count;
  cin >> count;
  // call it again
  simon(count);
  cout << "Done!" << endl;
}

// implementation of simon function
void simon(int count)
{
  using namespace std;
  cout << "Simon says touch your toes " << count << " times." << endl;
}