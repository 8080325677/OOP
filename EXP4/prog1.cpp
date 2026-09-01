//Program: Volume of a Box (Function Outside Class)
#include<iostream>
using namespace std;

class Box
{
public:
    int l, b, h;

    void accept();
    void display();
};

void Box::accept()
{
    cout<<"Enter Length Breadth Height: ";
    cin>>l>>b>>h;
}

void Box::display()
{
    cout<<"Volume = "<<l*b*h;
}

int main()
{
    Box obj;

    obj.accept();
    obj.display();

    return 0;
}
