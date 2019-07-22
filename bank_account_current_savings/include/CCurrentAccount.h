#ifndef CCURRENTACCOUNT_H
#define CCURRENTACCOUNT_H
#include "CBankAccount.h"

class CCurrentAccount : public CBankAccount
{
    public:
        CCurrentAccount();
        CCurrentAccount( float, float );
        void WithdrawCash( float );
        void UpdateFee( float );

    protected:
        float fFineAmount;

    private:
};

#endif // CCURRENTACCOUNT_H
