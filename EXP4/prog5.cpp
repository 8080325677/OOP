#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[20];

    void accept()
    {
        cout<<"Enter Roll No: ";
        cin>>roll;

        cout<<"Enter Name: ";
        cin>>name;
    }

    void display()
    {
        cout<<"Roll No = "<<roll<<endl;
        cout<<"Name = "<<name;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}
