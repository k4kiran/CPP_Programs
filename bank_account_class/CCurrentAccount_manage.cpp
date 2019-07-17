
#include "CBankAccount_manage.h"

void CBankAccount::WithDrawCash()
{
    float fWithdrawAmount;
    float fCurrentBalance;
    char cChoice;
    cout << "\nEnter the Withdraw amount : ";
    cin >> fWithdrawAmount;
    fCurrentBalance = GetBalance();
    if( fWithdrawAmount < fCurrentBalance - 1000 )
    {
        cout << "\nBalance will be less than 1000 Rs,Additional charge will be imposed ";
        cout << "\n Do you want to Continue? (y/n) : ";
        cin >> cChoice;
        if( cChoice == "y" )
        {
            //subtract cash
        }
        else
        {
            break;
        }

    }
}
