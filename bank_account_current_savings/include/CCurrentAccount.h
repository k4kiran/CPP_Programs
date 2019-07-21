#ifndef CCURRENTACCOUNT_H
#define CCURRENTACCOUNT_H
#include "CBankAccount.h"

class CCurrentAccount : CBankAccount
{
    public:
        CCurrentAccount();
        CCurrentAccount( float, float );
        int WithdrawCash( float );

    protected:
        float fFineAmount;

    private:
};

#endif // CCURRENTACCOUNT_H
