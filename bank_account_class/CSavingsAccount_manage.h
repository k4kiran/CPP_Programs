#ifndef CSAVINGSACCOUNT_MANAGE_H_INCLUDED
#define CSAVINGSACCOUNT_MANAGE_H_INCLUDED

#include "CBankAccount_manage.h"

class CSavingsAccount : public CBankAccount
{
    private:
        float m_fInterestRate = 0;

    public:
        CSavingsAccount();
        void GetInterestRate();
        void CalculateInterest();

};

#endif // CSAVINGSACCOUNT_MANAGE_H_INCLUDED
