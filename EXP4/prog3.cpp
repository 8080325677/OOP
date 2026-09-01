#include<iostream>
using namespace std;

class Rectangle
{
public:
    int l,b;

    void accept();
    void display();
};

void Rectangle::accept()
{
    cout<<"Enter Length and Breadth: ";
    cin>>l>>b;
}

void Rectangle::display()
{
    cout<<"Area = "<<l*b;
}

int main()
{
    Rectangle r;

    r.accept();
    r.display();

    return 0;
}
