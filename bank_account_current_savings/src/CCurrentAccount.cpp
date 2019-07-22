
#include "CCurrentAccount.h"


CCurrentAccount::CCurrentAccount()
{
    fAccountBalance = 10000;
    fFineAmount = 90;
}

CCurrentAccount::CCurrentAccount( float fBalance,float fAmountFine )
{
    fAccountBalance = fBalance;
    fFineAmount = fAmountFine;
}

void CCurrentAccount::WithdrawCash( float fAmount )
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

void CCurrentAccount::UpdateFee( float nFineNew )
{
    fFineAmount = nFineNew;
}
