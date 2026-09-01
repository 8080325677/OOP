//Program: Product (Outside Class)
#include<iostream>
using namespace std;

class Product
{
public:
    int id;
    float price;

    void accept();
    void display();
};

void Product::accept()
{
    cout<<"Enter Product ID: ";
    cin>>id;

    cout<<"Enter Price: ";
    cin>>price;
}

void Product::display()
{
    cout<<"Product ID = "<<id<<endl;
    cout<<"Price = "<<price;
}

int main()
{
    Product p;

    p.accept();
    p.display();

    return 0;
}
