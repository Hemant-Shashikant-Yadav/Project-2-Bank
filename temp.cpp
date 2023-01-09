#include <iostream>
#include <math.h>
// #include <time.h>
using namespace std;

double calculateLoanEMI(double rate)
{
    double PAmt, NoOfMonths, MonthlyIntrest, EMIAmt;

    cout << "Enter principal amount = ";
    cin >> PAmt;
    cout << "Enter no of months = ";
    cin >> NoOfMonths;
    cout << "For home loan intrest rate per year is " << rate << "%" << endl;

    MonthlyIntrest = rate / 12 / 100;
    EMIAmt = (PAmt * MonthlyIntrest * (pow((1 + MonthlyIntrest), (NoOfMonths)))) / (pow((1 + MonthlyIntrest), (NoOfMonths))-1);
    return EMIAmt;
}
int main()
{

    double no;

    no = calculateLoanEMI(7.2);
    cout << no;
    return 0;
}