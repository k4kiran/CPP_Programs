#include "CSavingsAccount.h"

CSavingsAccount::CSavingsAccount()
{
    //unimplemented
}
CSavingsAccount::CSavingsAccount( float fBalance,float fPercentage)
{
fAccountBalance=fBalance;
fInterestRate = fPercentage;
}

float CSavingsAccount::CalculateInterest( float )
{
return fAccountBalance * (fInterestRate/100);
}

void CSavingsAccount::SetInterest( float fPercentage )
{
    fInterestRate = fPercentage;
}
