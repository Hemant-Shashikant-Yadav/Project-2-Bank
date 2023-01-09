#include<iostream>
#include<time.h>
using namespace std;


int main()
{
    srand(time(nullptr));
    // int no = (rand()%100000)*99;
    int no = rand()%100000;

    cout<<no;
    return 0;
}