#include <iostream>

#include "CBankAccount.h"
#include "CSavingsAccount.h"
using namespace std;

int main()
{
    float fBalanceAmount;
    cout<<"Set initial Account Balance:";
    cin >> fBalanceAmount;
    CBankAccount Account1(fBalanceAmount);
    CSavingsAccount savingsaccount1;
    int ch,ch2;
    while(1)
    {
        cout <<"1.Admin\n2.User";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"1.Change interest rate\n2.change fee\n   3. add interest to account";
            cin>>ch2;
            switch(ch2)
            {
            case 1:
                cout << "Enter new interest rate:";
                float fNewInterest;
                cin >> fNewInterest;

                break;
            default:cout <<"not ok";
            }
         break;
        }
    }
}
