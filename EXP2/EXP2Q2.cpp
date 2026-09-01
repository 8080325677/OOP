#include <iostream>
#include <string>

class Student {
private:
    int roll_no;
    std::string name;
    float marks;

public:
    // Member function declarations
    void accept();
    void display();
};

// Defining accept() outside the class using scope resolution operator
void Student::accept() {
    std::cout << "Enter Roll Number: ";
    std::cin >> roll_no;
    std::cin.ignore(); // To clear the input buffer before reading the string
    std::cout << "Enter Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Marks: ";
    std::cin >> marks;
}

// Defining display() outside the class using scope resolution operator
void Student::display() {
    std::cout << "\n--- Student Details ---" << std::endl;
    std::cout << "Roll Number: " << roll_no << std::endl;
    std::cout << "Name       : " << name << std::endl;
    std::cout << "Marks      : " << marks << std::endl;
}

int main() {
    Student s;
    s.accept();   // Input data
    s.display();  // Output data
    return 0;
}


