#include <bits/stdc++.h>
#include <string>
using namespace std;
fstream fileptr;

// void account_activation_request(int no, string name, int user);
// void create_account(int no, string name1, int user)
// {
//     fstream fileptr;
//     char name[50];
//     char password[20];
//     int tempAccno = no;
//     string str;

// 1.
// fileptr.open("account.txt", ios::in);
// while (getline(fileptr, str))
// {
//     tempAccno++;
//     cout << tempAccno << endl;
// }
// fileptr.close();

// fileptr.open("account.txt", ios::app);
// fileptr << tempAccno << endl;
// fileptr.close();

// 2.
// int temp = user;
// cout << "Enter the name = ";
// gets(name);

// cout << "Set password (case sencesitive)= ";
// gets(password);

// cout << "Your temporary " << name1 << " no is = " << tempAccno;

// if (temp == 1)
// {
//     fileptr.open("cashier_account.txt", ios::in);
// }
// else
// {
//     fileptr.open("customer_account.txt", ios::in);
// }
// while (getline(fileptr, str))
// {
//     tempAccno++;
// }
// fileptr.close();

// if (temp == 1)
// {
//     fileptr.open("cashier_account.txt", ios::in);
// }
// else
// {
//     fileptr.open("customer_account.txt", ios::in);
// }
// fileptr << tempAccno;
// fileptr << " = " << name << endl;

// fileptr.close();
// cout << endl;

// 3.
// cout << "Enter the name = ";
// gets(name);

// cout << "Set password (case sencesitive)= ";
// gets(password);

// switch (user)
// {
// case 1:
//     /* code */
//     fileptr.open("customer_account.txt", ios::in);
//     while (getline(fileptr, str))
//     {
//         tempAccno++;
//     }
//     fileptr.close();
//     cout << "Your temporary " << name1 << " no is = " << tempAccno;

//     fileptr.open("customer_account.txt", ios::app);
//     fileptr << tempAccno;
//     fileptr << " = " << name << endl;
//     fileptr.close();
//     cout << endl;

//     fileptr.open("customer_account_status.txt", ios::app);
//     fileptr << tempAccno << " = Inactive" << endl;
//     fileptr.close();

//     account_activation_request(tempAccno, name, 1);
//     break;
// case 2:
//     /* code */
//     fileptr.open("cashier_account.txt", ios::in);
//     while (getline(fileptr, str))
//     {
//         tempAccno++;
//     }
//     fileptr.close();
//     cout << "Your temporary " << name1 << " no is = " << tempAccno;

//     fileptr.open("cashier_account.txt", ios::app);
//     fileptr << tempAccno;
//     fileptr << " = " << name << endl;
//     fileptr.close();
//     cout << endl;

//     fileptr.open("cashier_account_status.txt", ios::app);
//     fileptr << tempAccno << " = Inactive" << endl;
//     fileptr.close();

//     account_activation_request(tempAccno, name, 2);
//     break;
// }

// }

// void account_activation_request(int no, string name, int user)
// {
//     string str;
//     int count;
//     /*
//     file names
//     1.request manager -- from cashier to manager
//     2.requesr casher -- from customer to cashier

//     */
//     fstream fileptr;
//     switch (user)
//     {
//     case 1:
//         count = 1;

//         fileptr.open("requesr_cashier.txt", ios::in);
//         while (getline(fileptr, str))
//         {
//             count++;
//         }
//         fileptr.close();

//         fileptr.open("requesr_cashier.txt", ios::app);
//         fileptr << count << ". " << name << " created an account, account no. = " << no << ". Please approve." << endl;
//         fileptr.close();
//         cout << endl;

//         break;
//     case 2:
//         count = 1;

//         fileptr.open("request_manager.txt", ios::in);
//         while (getline(fileptr, str))
//         {
//             count++;
//         }
//         fileptr.close();

//         fileptr.open("request_manager.txt", ios::app);
//         fileptr << count << ". " << name << " created an id, id no. = " << no << ". Please approve." << endl;
//         fileptr.close();
//         cout << endl;
//         break;
//     }
// }

int main()
{
    // 1.user
    // 2.cashier

    // create_account(1000000, "account", 1);
    // create_account(100, "id", 2);
    // create_account(1000000, "account", 1);
    // create_account(100, "id", 2);

    // fileptr.open("pending_request_customer.txt", ios::in);
    // string str;

    // if (fileptr.eof())
    // {
    //     cout << "No pending requests.";
    //     /* code */
    // }
    // while (1)
    // {
    /* code */
    // while (!fileptr.eof())
    // {
    //     getline(fileptr, str);
    //     cout << str << endl;
    // }

    // if (str=="o")
    // {
    //     cout << "No pending requests.";

    // }

    // }
    // fileptr.seekp(0, ios::end);
    // int pos = fileptr.tellp();
    // // cout << pos;
    // fileptr.seekp(0, ios::beg);

    // if (pos == 0)
    // {
    //     cout << "No pending requests.";
    // }
    // else
    // {
    //     /* code */
    //     while (!fileptr.eof())
    //     {
    //         getline(fileptr, str);
    //         cout << str << endl;
    //     }
    // }

    // fileptr.close();
    double accoutNo;
    char pass[20];
    int num;
    string str;
    fileptr.open("customer_account_status.txt", ios::in);

    cin >> accoutNo;
    cin >> pass;

    // fileptr >> num;

    // cout << num << endl;
    // // cout << sizeof(num);

    // fileptr.seekg(18, ios::beg );

    // fileptr >> num;

    // cout << num << endl;
    // // fileptr.seekg(10, ios::cur );
    // // fileptr.seekg(38, ios::beg );
    // fileptr.seekg(10, ios::cur );
    // fileptr.

    // fileptr >> num;

    // cout << num << endl;
    // // cout << sizeof(num);
    int flag = 0;
    int count = 1, i = 1;
    char str1[20];
    // while (!fileptr.eof())
    // {
    //     fileptr >> num;
    //     cout << num << endl;
    //     getline(fileptr, str);
    //     if (str == " =   active")
    //     {
    //         flag = 1;
    //         break;
    //     }
    //     /* code */
    // }

    // fileptr.close();
    // if (flag == 1)
    // {
    //     cout << "Login successful";
    // }
    // else
    // {
    //     cout << "Account is incative";
    // }

    while (!fileptr.eof())
    {
        fileptr >> num;
        cout << num << endl;
        getline(fileptr, str);

        if (num == accoutNo)
        {
            fileptr.close();
            cout << "Account found" << endl;
            fileptr.open("customer_pass.txt", ios::in);

            while (i <= count)
            {
                fileptr>>str1;
                i++;
            }
            fileptr.close();
            if (!strcmp(pass,str1))
            {
                cout << "correct passsword";
                flag = 1;
                break;
            }
            break;
        }
        count++;
    }

if(flag==1)
{
    cout<<"login successful";
}
else
{
    cout<<"Error";
}

    return 0;
}