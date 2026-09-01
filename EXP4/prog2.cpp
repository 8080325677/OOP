//Program: Student Information (Outside Class)
#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[20];

    void accept();
    void display();
};

void Student::accept()
{
    cout<<"Enter Roll No: ";
    cin>>roll;

    cout<<"Enter Name: ";
    cin>>name;
}

void Student::display()
{
    cout<<"Roll No = "<<roll<<endl;
    cout<<"Name = "<<name;
}

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}
