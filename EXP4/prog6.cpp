#include<iostream>
using namespace std;

class Account
{
public:
    int accNo;
    float balance;

    void accept();
    void display();
};

void Account::accept()
{
    cout<<"Enter Account Number: ";
    cin>>accNo;

    cout<<"Enter Balance: ";
    cin>>balance;
}

void Account::display()
{
    cout<<"Account Number = "<<accNo<<endl;
    cout<<"Balance = "<<balance;
}

int main()
{
    Account a;

    a.accept();
    a.display();

    return 0;
}
