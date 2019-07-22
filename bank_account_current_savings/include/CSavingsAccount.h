#ifndef CSAVINGSACCOUNT_H
#define CSAVINGSACCOUNT_H

#include "CBankAccount.h"

class CSavingsAccount : public CBankAccount
{
    public:
        CSavingsAccount();
        CSavingsAccount(float, float);
        float CalculateInterest( float );
        void SetInterest( float );



    protected:
        float fInterestRate;

    private:
};

#endif // CSAVINGSACCOUNT_H
