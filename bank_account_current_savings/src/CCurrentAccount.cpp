
#include "CCurrentAccount.h"


CCurrentAccount::CCurrentAccount()
{
    //unimplemented
}

CCurrentAccount::CCurrentAccount( float fBalance,float fAmountFine )
{
    fAccountBalance = fBalance;
    fFineAmount = fAmountFine;
}

CCurrentAccount::WithdrawCash( float fAmount )
{
    if( (fAccountBalance - fAmount)> 1000)
    {
        fAccountBalance = fAccountBalance - fAmount;
        cout<<"transaction completed";
    }
    else
    {
        fAccountBalance = fAccountBalance - fAmount - fFineAmount;
        cout << "fee deducted";
    }
}
