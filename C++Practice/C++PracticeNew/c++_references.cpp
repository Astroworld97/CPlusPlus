#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza"; // "food" variable
    string &meal = food;   // reference variable to the "food" variable

    cout << food << "\n"; // Outputs "Pizza"
    cout << meal << "\n"; // Outputs "Pizza"
    cout << &food;        //gets the memory address of the "food" variable
    return 0;
}
