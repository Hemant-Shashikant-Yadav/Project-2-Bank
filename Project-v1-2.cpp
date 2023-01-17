#include <bits/stdc++.h>
using namespace std;

// define all veriables in bank class
// define all function related to account in baml class
// define request funtion and pending request function in each reaspective class

fstream fileptr;
int balance;

void search_account(int accNo);

class bank
{
protected:
    /* data */

public:
    void bankMenu();

    void addAccount();
    void removeAccount(int accNo);

    void depositMoney(int accNo);
    void withdrawMoney(int accNo);

    void card(int accNo);
    void applyCard();
    void closeCard();

    void fixedDiposit(int accNo);

    void applyPassbook(int accNo);

    void applyCheckbook(int accNo);

    void loan(int accNo);
    void homeLone();
    void goldLone();
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
    void recived_manager_request();
};

class cashier : public manager
{
protected:
    /* data */
public:
    void cashierMenu();

    void cashier_login();
    void addAccountCashier();
    void cashier_request(int no, string name);
    void recived_cashier_request();
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

    void customer_request(int no, string name, int user, int opt, string loanName);
    void Pending_customer_request(int accNo);
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
    int opt;
    while (1)
    {
        manager M;
        cout << "\nHello manager." << endl
             << "Options = " << endl
             << "1.Log in to acount." << endl
             << "2.Exit. " << endl
             << "Choose option = ";

        cin >> opt;
        if (opt == 2)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            M.manager_login();
            break;

        default:
            break;
        }
    }
}

// 2.Cashier
void cashier::cashierMenu()
{

    int opt;
    while (1)
    {
        cashier C;
        cout << "\nHello cashier." << endl
             << "Options = " << endl
             << "1.Log in to acount." << endl
             << "2.Create new cashier account." << endl
             << "3.Exit. " << endl
             << "Choose option = ";

        cin >> opt;
        getchar();

        if (opt == 3)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            C.cashier_login();
            break;

        case 2:
            C.addAccountCashier();
            break;

        default:
            break;
        }
    }
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
        getchar();

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

/*

All manager relater operations

*/
// manager class -> managerMenu function's subfunctions
void manager::manager_login()
{
    double accoutNo;
    char password[50];
    int incorrectCount = 3;

    while (1)
    {
        int flag = 0;
        cout << "\nEnter your bank id number = ";
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
             << "1.Check recived requests." << endl
             << "2.exit." << endl;

        cin >> opt;

        manager M;
        if (opt == 2)
        {
            return;
        }

        switch (opt)
        {
        case 1:
            M.recived_manager_request(); // open
            break;

        default:
            break;
        }
    }
}
// manager class -> managerMenu -> login function's subfunctions
void manager::recived_manager_request()
{
}

/*

All cashier relater operations

*/
// cashier class -> cashierMenu function's subfunctions
void cashier::cashier_login()
{
    double accoutNo;
    char password[50];
    int incorrectCount = 3;

    while (1)
    {
        int flag = 0;
        cout << "\nEnter your bank id number = ";
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
             << "1.Check recived requests." << endl
             << "2.Pending requests." << endl
             << "3.exit." << endl;

        cin >> opt;

        cashier C;
        if (opt == 3)
        {
            return;
        }

        switch (opt)
        {
        case 1:
            C.recived_cashier_request();
            break;
        case 2:
            C.Pending_cashier_request();
            break;

        default:
            break;
        }
    }
}

void cashier::addAccountCashier()
{
    // create_account(100, "id", 2);
    char name[50];
    char password[20];
    int tempAccno = 100;
    string str;

    cout << "Enter the name = ";
    gets(name);

    cout << "Set password (case sencesitive)= ";
    gets(password);

    fileptr.open("cashier_account.txt", ios::in);
    while (getline(fileptr, str))
    {
        tempAccno++;
    }
    fileptr.close();

    cout << "Your temporary id no is = " << tempAccno;

    fileptr.open("cashier_account.txt", ios::app);
    fileptr << tempAccno;
    fileptr << " = " << name << " , Password = " << password << endl;
    fileptr.close();

    cout << endl;

    fileptr.open("cashier_account_status.txt", ios::app);
    fileptr << tempAccno << " = Inactive" << endl;
    fileptr.close();

    cashier_request(tempAccno, name);

    /*
    code for storing the request

    */

    cout << "Your account opening request is sent to the bank manager." << endl
         << "After approval your accout will be opened." << endl
         << "Check for pending request.\n\n";
}

// Cashier class -> CashierMenu -> login function's subfunctions
void cashier::recived_cashier_request()
{
}
void cashier::Pending_cashier_request()
{
    fileptr.open("pending_request_cashier.txt", ios::in);
    string str;

    fileptr.seekp(0, ios::end);
    int pos = fileptr.tellp();
    fileptr.seekp(0, ios::beg);

    if (pos == 0)
    {
        cout << "No pending requests.";
    }
    else
    {
        while (!fileptr.eof())
        {
            getline(fileptr, str);
            cout << str << endl;
        }
    }

    fileptr.close();
}

/*

All customer relater operations

*/
// Customer class -> customerMenu function's subfunctions
void customer::customer_login()
{
    double accoutNo, num;
    char password[50], str1[50];
    int i = 1, count = 1;
    int incorrectCount = 3;
    string str;

    while (1)
    {
        int flag = 0;
        cout << "\nEnter your bank account number = ";
        cin >> accoutNo;
        getchar();
        cout << "Enter the password = ";
        gets(password);

        fileptr.open("customer_account_status.txt", ios::in);
        while (!fileptr.eof())
        {
            fileptr >> num;
            getline(fileptr, str);

            if (str == " =   active")
            {
                if (num == accoutNo)
                {
                    fileptr.close();
                    fileptr.open("customer_pass.txt", ios::in);

                    while (i <= count)
                    {
                        fileptr >> str1;
                        i++;
                    }
                    fileptr.close();
                    if (!strcmp(password, str1))
                    {
                        flag = 1;
                        break;
                    }
                    break;
                }
            }
            else
            {
                cout << "Your account is still not activited. Pleae wait, your account will be activited shortly.";
                return;
            }

            count++;
        }

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
             << "3.Card." << endl
             << "4.Open Fixed deposite" << endl
             << "5.Apply for passbook." << endl
             << "6.Apply for checkbook." << endl
             << "7.Apply for loan." << endl
             << "8.Remaove account." << endl
             << "9.Check you request status." << endl
             << "10.exit." << endl;

        cin >> opt;

        bank B;
        customer C;
        if (opt == 10)
        {
            return;
        }

        switch (opt)
        {
        case 1:
            B.depositMoney(accoutNo);
            break;
        case 2:
            B.withdrawMoney(accoutNo);
            break;
        case 3:
            B.card(accoutNo);
            break;
        case 4:
            B.fixedDiposit(accoutNo);
            break;
        case 5:
            B.applyPassbook(accoutNo);
            break;
        case 6:
            B.applyCheckbook(accoutNo);
            break;
        case 7:
            B.loan(accoutNo);
            break;
        case 8:
            B.removeAccount(accoutNo);
            break;
        case 9:
            C.Pending_customer_request(accoutNo);
            break;

        default:
            break;
        }
    }
}

void bank::addAccount()
{
    // create_account(1000000, "account", 1);
    char name[50];
    char password[20];
    int tempAccno = 1000000;
    string str;

    cout << "Enter the name = ";
    gets(name);

    cout << "Set password (case sencesitive)= ";
    gets(password);

    fileptr.open("customer_account.txt", ios::in);
    while (getline(fileptr, str))
    {
        tempAccno++;
    }
    fileptr.close();

    cout << "Your temporary account no is = " << tempAccno;

    fileptr.open("customer_account.txt", ios::app);
    fileptr << tempAccno;
    fileptr << " = " << name << " , Password = " << password << endl;
    fileptr.close();

    fileptr.open("customer_pass.txt", ios::app);
    fileptr << password << endl;
    fileptr.close();

    cout << endl;

    fileptr.open("customer_account_status.txt", ios::app);
    fileptr << tempAccno << " = Inactive" << endl;

    fileptr.close();

    customer c;
    c.customer_request(tempAccno, name, 1, 0, "null");

    fileptr.open("balance.txt", ios::app);
    fileptr << 0 << endl;
    fileptr.close();

    cout << "Your account opening request is sent to the bank cashier." << endl
         << "After approval your accout will be opened." << endl
         << "Check for pending request.\n\n";
}

void customer::intrest()
{
    float ammountP;
    float time;
    float rate;
    float ammountF;
    cout << "Welcome to simple intrest calculator = " << endl
         << "Enter principal ammount = ";
    cin >> ammountP;
    cout << "Enter anual rate of intrest = ";
    cin >> rate;
    rate /= 100;
    cout << "Enter time in years = ";
    cin >> time;

    ammountF = ammountP * (1 + (rate * time));

    cout << "The intrest over inputed ammount will be = " << (ammountP * rate * time) << endl;
    cout << "The total amount after intrest will be = " << ammountF;
}

float calculateLoanEMI(float rate)
{
    float PAmt, NoOfyears, MonthlyIntrest, EMIAmt;

    cout << "Enter principal amount = ";
    cin >> PAmt;
    cout << "Enter no of years = ";
    cin >> NoOfyears;
    NoOfyears *= 12;

    cout << "For home loan intrest rate per year is " << rate << "%";

    MonthlyIntrest = rate / 1200;
    EMIAmt = (PAmt * MonthlyIntrest * pow(1 + MonthlyIntrest, NoOfyears)) / (pow(1 + MonthlyIntrest, NoOfyears) - 1);
    cout << "The intrest over inputed ammount will be = " << (PAmt * (MonthlyIntrest * 12) * (NoOfyears / 12)) << endl;
    cout << "The ammount payable will be = " << PAmt * (1 + ((MonthlyIntrest * 12) * (NoOfyears / 12))) << endl;

    return EMIAmt;
}

void customer::loan_calculate()
{
    int opt;
    float EMI;

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
        cout << "The EMI for home loan for 8.75% intrest is = " << EMI << endl;
        break;

    case 2:
        // Gold loan
        EMI = calculateLoanEMI(7.30);
        cout << "The EMI for home loan for 7.30% intrest is = " << EMI << endl;
        break;
        break;

    case 3:
        // Student loan
        EMI = calculateLoanEMI(10.05);
        cout << "The EMI for home loan for 10.05% intrest is = " << EMI << endl;
        break;

    case 4:
        // Personal loan
        EMI = calculateLoanEMI(9.60);
        cout << "The EMI for home loan for 9.60% intrest is = " << EMI << endl;
        break;

    default:
        break;
    }
}

// Customer class -> customerMenu -> login function's subfunctions
void bank::depositMoney(int accNo)
{
    cout<<"Enter ammount you want to add = ";
    int amount, balance, count1;
    cin >> amount;
    int count = 0, i = 0, temp;
    string str;

    count1 = (accNo - 1000000);
    
    fileptr.open("balance.txt", ios::in);
    while (getline(fileptr, str))
    {
        count++;
    }
    fileptr.close();

    int *num = (int *)malloc(count * sizeof(int));

    fileptr.open("balance.txt", ios::in);
    while (i < count)
    {
        fileptr >> temp;
        (*num) = temp;
        num++;
        i++;
    }
    fileptr.close();

    num = num - count;
    while (i--)
    {
        cout << *num << endl;
        num++;
    }

    num = num - count;
    *(num + count1) += amount;

    i = 0;
    fileptr.open("balance.txt", ios::out);
    while (i < count)
    {
        fileptr << *num << endl;
        num++;
        i++;
    }
    fileptr.close();
}
void bank::withdrawMoney(int accNo)
{
    cout<<"Enter ammount you want to wirhdraw = ";
    int amount, balance, count1;
    cin >> amount;
    int count = 0, i = 0, temp;
    string str;

    count1 = (accNo - 1000000);
    
    fileptr.open("balance.txt", ios::in);
    while (getline(fileptr, str))
    {
        count++;
    }
    fileptr.close();

    int *num = (int *)malloc(count * sizeof(int));

    fileptr.open("balance.txt", ios::in);
    while (i < count)
    {
        fileptr >> temp;
        (*num) = temp;
        num++;
        i++;
    }
    fileptr.close();

    num = num - count;
    while (i--)
    {
        cout << *num << endl;
        num++;
    }

    num = num - count;
    
    if (amount > *(num + count1))
    {
        cout << "Insufficient balance !!!\nTry again.";
    }
    else
    {
        *(num + count1) -= amount;
    }

    i = 0;
    fileptr.open("balance.txt", ios::out);
    while (i < count)
    {
        fileptr << *num << endl;
        num++;
        i++;
    }
    fileptr.close();
}
void bank::card(int accNo)
{
    int opt;
    cout << "\nSelect a option = " << endl
         << "1.Apply card." << endl
         << "2.Close card." << endl
         << "3.exit." << endl;

    cin >> opt;
    customer C;
    if (opt == 3)
    {
        return;
    }

    switch (opt)
    {
    case 1:
        C.applyCard();
        break;
    case 2:
        C.closeCard();
        break;

    default:
        break;
    }
}
void bank::fixedDiposit(int accNo)
{
}
void bank::applyPassbook(int accNo)
{
}
void bank::applyCheckbook(int accNo)
{
}
void bank::loan(int accNo)
{
    int opt;
    cout << "\nSelect a option = " << endl
         << "1.Home loan." << endl
         << "2.Gold loan." << endl
         << "3.Student loan." << endl
         << "4.Personal loan." << endl
         << "5.exit." << endl;

    cin >> opt;
    customer C;
    if (opt == 5)
    {
        return;
    }

    switch (opt)
    {
    case 1:
        C.homeLone();
        break;
    case 2:
        C.goldLone();
        break;
    case 3:
        C.studentLoan();
        break;
    case 4:
        C.personalLoan();
        break;

    default:
        break;
    }
}
void bank::removeAccount(int accNo)
{
}
void customer::Pending_customer_request(int accNo)
{
    fileptr.open("pending_request_customer.txt", ios::in);
    string str;

    fileptr.seekp(0, ios::end);
    int pos = fileptr.tellp();
    fileptr.seekp(0, ios::beg);

    if (pos == 0)
    {
        cout << "No pending requests.";
    }
    else
    {
        while (!fileptr.eof())
        {
            getline(fileptr, str);
            cout << str << endl;
        }
    }

    fileptr.close();
}

// Customer class -> customerMenu -> login function -> card function's subfunctions
void bank::applyCard()
{
}
void bank::closeCard()
{
}

// Customer class -> customerMenu -> login function -> loan function's subfunctions
void bank::homeLone()
{
}
void bank::goldLone()
{
}
void bank::studentLoan()
{
}
void bank::personalLoan()
{
}

// Customer request which will be sent to either cashier or manager
void customer::customer_request(int no, string name, int user, int opt, string loanName)
{
    /*
    credit card
    loan-all types
    remove account
    */
    string str;
    int count;

    switch (user)
    {
    case 1:
        count = 1;

        fileptr.open("requesr_cashier.txt", ios::in);
        while (getline(fileptr, str))
        {
            count++;
        }
        fileptr.close();

        fileptr.open("requesr_cashier.txt", ios::app);
        fileptr << count << ". " << name << " created an account, account no. = " << no << ". Please approve." << endl;
        fileptr.close();

        count = 1;

        fileptr.open("pending_request_customer.txt", ios::in);
        while (getline(fileptr, str))
        {
            count++;
        }
        fileptr.close();

        fileptr.open("pending_request_customer.txt", ios::app);
        fileptr << count << ". " << name << " , account no. = " << no << ". The request of opening an account is sent to cashier. They will approve the request shotly.Please wait." << endl;
        fileptr.close();
        cout << endl;

        break;
    case 2:
        // modifications =
        //  count func can be taken common
        //  customer pending request can be taken common
        switch (opt)
        {
        case 1:
            /* code */
            count = 1;
            fileptr.open("request_manager.txt", ios::in);
            while (getline(fileptr, str))
            {
                count++;
            }
            fileptr.close();

            fileptr.open("request_manager.txt", ios::app);
            fileptr << count << ". " << name << ", account no. = " << no << ". Customer wants a credit card. Please approve." << endl;
            fileptr.close();

            fileptr.open("pending_request_customer.txt", ios::in);
            while (getline(fileptr, str))
            {
                count++;
            }
            fileptr.close();

            fileptr.open("pending_request_customer.txt", ios::app);
            fileptr << count << ". " << name << " , id no. = " << no << ". The request for credit card is sent to manager. They will approve the request shotly.Please wait." << endl;
            fileptr.close();

            cout << endl;
            break;
        case 2:
            /* code */
            count = 1;
            fileptr.open("request_manager.txt", ios::in);
            while (getline(fileptr, str))
            {
                count++;
            }
            fileptr.close();

            fileptr.open("request_manager.txt", ios::app);
            fileptr << count << ". " << name << ", account no. = " << no << ". Customer wants a " << loanName << " loan. Please approve." << endl;
            fileptr.close();

            fileptr.open("pending_request_customer.txt", ios::in);
            while (getline(fileptr, str))
            {
                count++;
            }
            fileptr.close();

            fileptr.open("pending_request_customer.txt", ios::app);
            fileptr << count << ". " << name << " , id no. = " << no << ". The request for a " << loanName << " loan is sent to manager. They will approve the request shotly.Please wait." << endl;
            fileptr.close();

            cout << endl;
            break;
        case 3:
            /* code */
            count = 1;
            fileptr.open("request_manager.txt", ios::in);
            while (getline(fileptr, str))
            {
                count++;
            }
            fileptr.close();

            fileptr.open("request_manager.txt", ios::app);
            fileptr << count << ". " << name << ", account no. = " << no << ". Customer wants to close account. Please approve." << endl;
            fileptr.close();

            fileptr.open("pending_request_customer.txt", ios::in);
            while (getline(fileptr, str))
            {
                count++;
            }
            fileptr.close();

            fileptr.open("pending_request_customer.txt", ios::app);
            fileptr << count << ". " << name << " , id no. = " << no << ". The request for closing account is sent to manager. They will approve the request shotly.Please wait." << endl;
            fileptr.close();

            cout << endl;
            break;

        default:
            break;
        }
    }
}
// cashier request which will be sent to  manager
void cashier::cashier_request(int no, string name)
{
    string str;
    int count;

    count = 1;

    fileptr.open("request_manager.txt", ios::in);
    while (getline(fileptr, str))
    {
        count++;
    }
    fileptr.close();

    fileptr.open("request_manager.txt", ios::app);
    fileptr << count << ". " << name << " created an id, id no. = " << no << ". Please approve." << endl;
    fileptr.close();

    fileptr.open("pending_request_cashier.txt", ios::in);
    while (getline(fileptr, str))
    {
        count++;
    }
    fileptr.close();

    fileptr.open("pending_request_cashier.txt", ios::app);
    fileptr << count << ". " << name << " , id no. = " << no << ". The request of opening an id is sent to manager. They will approve the request shotly.Please wait." << endl;
    fileptr.close();

    cout << endl;
}
