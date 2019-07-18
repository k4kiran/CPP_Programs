
#include "CCurrentAccount_manage.h"

void CCurrentAccount::WithDrawCash()
{
    float fWithdrawAmount;
    float fCurrentBalance;
    char cChoice;
    cout << "\nEnter the Withdraw amount : ";
    cin >> fWithdrawAmount;
    fCurrentBalance = GetBalance();
    if( (fCurrentBalance - fWithdrawAmount) > 1000 )
    {
        fCurrentBalance = fCurrentBalance - fWithdrawAmount;
        SetBalance( fCurrentBalance );
    }
    else
    {
        cout << "\nBalance is less than 1000 Rs\nTransaction failed ";
    }
}

