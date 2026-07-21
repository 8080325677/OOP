#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an integer
    int *ptr = new int;

    // Accept value from the user
    cout << "Enter an integer: ";
    cin >> *ptr;

    // Display the value
    cout << "The entered integer is: " << *ptr << endl;

    // Deallocate the memory
    delete ptr;

    // Avoid dangling pointer
    ptr =nullptr;

    return 0;
}

