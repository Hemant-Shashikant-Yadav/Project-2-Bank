#include <bits/stdc++.h>
using namespace std;

// define all veriables in bank class
// define all function related to account in baml class
// define request funtion and pending request function in each reaspective class

int balance;

class bank
{
protected:
    /* data */

public:
    void bankMenu();

    void addAccount();
    void removeAccount();

    void depositMoney();
    void withdrawMoney();

    void card();
    void applyCard();
    void closeCard();

    void fixedDiposit();

    void applyPassbook();

    void applyCheckbook();

    void loan();
    void goldLone();
    void homeLone();
    void studentLoan();
    void personalLoan();
};

class manager : public bank
{
protected:
    /* data */
public:
    void managerMenu();

    void manager_login();

    void Pending_manager_request();
};

class cashier : public manager
{
protected:
    /* data */
public:
    void cashierMenu();

    void cashier_login();
    void cashier_request();
    void Pending_cashier_request();
};

class customer : public cashier
{
protected:
    /* data */
public:
    void customerMenu();

    void customer_login();
    void intrest();
    void loan_calculate();

    void customer_request();
    void Pending_customer_request();
};

int main()
{
    bank B;
    B.bankMenu();

    return 0;
}

// Main entities
// 0.Bank
void bank::bankMenu()
{
    int opt;
    while (1)
    {
        customer C;
        cout << "Welcome" << endl
             << "Hemant Yadav Pvt. Bank" << endl
             << "Choose the entity" << endl
             << "1.Manager" << endl
             << "2.Cashier" << endl
             << "3.Customer" << endl
             << "4.Exit" << endl
             << "Choose option = ";
        cin >> opt;
        if (opt == 4)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            C.managerMenu();
            break;

        case 2:
            C.cashierMenu();
            break;

        case 3:
            C.customerMenu();
            break;

        default:
            break;
        }
    }
}
// 1.Manager
void manager::managerMenu()
{
    cout << "Hello Manager" << endl;
}

// 2.Cashier
void cashier::cashierMenu()
{
    cout << "Hello cashier" << endl;
}

// 3.Customer
void customer::customerMenu()
{
    int opt;
    while (1)
    {
        customer C;
        cout << "\nHello customer." << endl
             << "Options = " << endl
             << "1.Log in to acount." << endl
             << "2.Create new bank account." << endl
             << "3.Calculate intrest." << endl
             << "4.Calculate loan." << endl
             << "5.Exit. " << endl
             << "Choose option = ";

        cin >> opt;
        if (opt == 5)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            C.customer_login();
            break;

        case 2:
            C.addAccount();
            break;

        case 3:
            C.intrest();
            break;

        case 4:
            C.loan_calculate();

        default:
            break;
        }
    }
}

// Customer class -> customerMenu function's subfunctions
void customer::customer_login()
{
    double accoutNo;
    char password[50];
    int incorrectCount = 3;

    while (1)
    {
        int flag = 0;
        cout << "\nEnter your bank account number = ";
        cin >> accoutNo;
        getchar();
        cout << "Enter the password = ";
        gets(password);

        /*
            check account status (active / inactive)

        */
        /*

        verification orocess

        */

        if (flag == 1)
        {
            break;
        }
        else
        {
            cout << "\nIncorrect username and password." << endl
                 << "\nYou have only " << --incorrectCount << " chances left." << endl
                 << "Please retry !!!" << endl;
        }

        if (incorrectCount == 0)
        {
            return;
        }
    }

    while (1)
    {
        int opt;
        cout << "\nYou are logged in succesfully." << endl
             << "\nSelect a option = " << endl
             << "1.Deposit money to account." << endl
             << "2.Withdraw money from account." << endl
             << "3.Apply for card." << endl
             << "4.Apply for passbook." << endl
             << "5.Apply for checkbook." << endl
             << "6.Apply for loan." << endl
             << "6.Check you request status." << endl
             << "7.exit." << endl;

        if (opt == 7)
        {
            return;
        }

        switch (1)
        {
        case 1:
            depositMoney();
            break;

        default:
            break;
        }
    }
}

void bank::addAccount()
{
    char name[50];
    char password[20];
    int tempAccNo;

    cout << "Enter the name = ";
    gets(name);

    cout << "Set password (case sencesitive)= ";
    gets(password);

    srand(time(nullptr));
    tempAccNo = rand() % 100000;

    cout << "Your temporary account no is = " << tempAccNo;

    /*
    set account status as inactive
    */
    /*
    code for storing the request

    */

    cout << "Your account opening request is sent to the bank cashier." << endl
         << "After approval your accout will be opened." << endl
         << "Check for pending request.";
}

void customer::intrest()
{
    int ammountP;
    int time;
    int rate;
    int ammountF;
    cout << "Welcome to simple intrest calculator = " << endl
         << "Enter principal ammount = ";
    cin >> ammountP;
    cout << "Enter rate of intrest = ";
    cin >> rate;
    cout << "Enter time in years = ";
    cin >> time;

    ammountF = ammountP * (1 + rate * time);

    cout << "The intrest over inputed ammount will be = " << (ammountP * (rate * time)) << endl;
    cout << "The total amount after intrest will be = " << ammountF;
}

float calculateLoanEMI(float rate)
{
    float PAmt, NoOfMonths, MonthlyIntrest, EMIAmt;

    cout << "Enter principal amount = ";
    cin >> PAmt;
    cout << "Enter no of months = ";
    cin >> NoOfMonths;
    cout << "For home loan intrest rate per year is " << rate << "%";

    MonthlyIntrest = rate / 12 / 100;
    EMIAmt = PAmt * MonthlyIntrest * (1 + MonthlyIntrest) * NoOfMonths / ((1 + MonthlyIntrest) * NoOfMonths - 1);
    return EMIAmt;
}
void customer::loan_calculate()
{
    int opt;
    int EMI;

    cout << "Select which lone you want to buy = " << endl
         << "Menu" << endl
         << "1.Home loan " << endl
         << "2.Gold loan " << endl
         << "3.Student loan " << endl
         << "4.Personal loan " << endl
         << "5.Exit " << endl
         << "choose = ";

    cin >> opt;

    if (opt == 5)
    {
        return;
    }

    switch (opt)
    {
    case 1:
        // Home loan
        EMI = calculateLoanEMI(8.75);
        break;
    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    default:
        break;
    }
}

// Customer class -> customerMenu -> login function's subfunctions
