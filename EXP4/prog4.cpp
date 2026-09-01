//Program: Square of a Number (Function Inside Class)
#include<iostream>
using namespace std;

class Square
{
public:
    int n;

    void accept()
    {
        cout<<"Enter Number: ";
        cin>>n;
    }

    void display()
    {
        cout<<"Square = "<<n*n;
    }
};

int main()
{
    Square s;

    s.accept();
    s.display();

    return 0;
}
