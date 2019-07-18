
#include "CCurrentAccount_manage.h"

void CCurrent::WithDrawCash()
{
    float fWithdrawAmount;
    float fCurrentBalance;
    char cChoice;
    cout << "\nEnter the Withdraw amount : ";
    cin >> fWithdrawAmount;
    fCurrentBalance = GetBalance();
    if( (fCurrentBalance - fWithdrawAmount) < 1000 )
    {
        cout << "\nBalance is less than 1000 Rs\nTransaction failed ";

    }
    else
    {
        fCurrentBalance = fCurrentBalance - fWithdrawAmount;
        SetBalance( fCurrentBalance );

    }

}

