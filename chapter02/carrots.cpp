// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

int main() {
    using namespace std;

    int carrots; // declear an interger variable

    carrots = 25; // assign a value to the variable
    cout << "I have ";
    cout << carrots;
    cout << " carrots." << endl;
    carrots = carrots - 1; // modify the variable
    cout << "Now i have " << carrots << " carrots." << endl;
}
