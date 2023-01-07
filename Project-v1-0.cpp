#include <iostream>
using namespace std;

//define all veriables in bank class
//define all function related to account in baml class
//define request funtion and pending request function in each reaspective class

class bank
{
protected:
    /* data */
    // int a;

public:
    // void display()
    // {

    // }
};

class manager : public bank
{
protected:
    /* data */
public:
    // void getData()
    // {
    //     cin >> a;
    //     cout<<"manager"<<a;
    //     display();
    // }
};

class cashier : public manager
{
protected:
    /* data */
public:
    // void getData()
    // {
    //     cin >> a;
    //     cout<<"manager"<<a;
    //     display()
    // }
};

class customer : public cashier
{
protected:
    /* data */
public:
    void getData();
    // {
    //     cin >> a;
    //     cout<<"CUSTOMER"<<a;
    //     display();
    // }
};

int main()
{
    // bank b;
    // customer c;

    return 0;
}