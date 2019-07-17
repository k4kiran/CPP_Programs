
#include "CSavingsAccount_manage.h"


// --------------------------------------------------------------
// Method      : Constructor
// Parameters  : Nil
// Returns     : void
// Description : To initialize interest rate.
// --------------------------------------------------------------

CSavingsAccount::CSavingsAccount()
{
    m_fInterestRate = 0;
}

// --------------------------------------------------------------
// Method      : GetInterestRate
// Parameters  : Nil
// Returns     : void
// Description : To read interest rate.
// --------------------------------------------------------------

void CSavingsAccount::GetInterestRate()
{
    float fInterestValue;
    cout << "Enter The Interest rate : ";
    cin >> fInterestValue;
    m_fInterestRate = fInterestValue;
}

// --------------------------------------------------------------
// Method      : CalculateInterest
// Parameters  : Nil
// Returns     : void
// Description : To calculate interest.
// --------------------------------------------------------------

void CSavingsAccount::CalculateInterest()
{
    float fInterest = 0;
    fInterest = ( m_fInterestRate * GetBalance() ) / 100;
    cout << "\nInterest : " << fInterest;
}
