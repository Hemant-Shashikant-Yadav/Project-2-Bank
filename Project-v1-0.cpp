#include <iostream>
using namespace std;

class bank
{
private:
    /* data */
public:
    bank();
};

bank::bank()
{
}

class manager : public bank
{
private:
    /* data */
public:
    manager(/* args */);
    
};

manager::manager(/* args */)
{
}

class cashier : public manager
{
private:
    /* data */
public:
    cashier(/* args */);
};

cashier::cashier(/* args */)
{
}

class customer
{
private:
    /* data */
public:
    customer(/* args */);
};

customer::customer(/* args */)
{
}


int main()
{

    return 0;
}