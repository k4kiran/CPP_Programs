
#ifndef CBANKACCOUNT_MANAGE_H_INCLUDED
#define CBANKACCOUNT_MANAGE_H_INCLUDED

#include <iostream>

using namespace std;

class CBankAccount
{
    private:
        float m_fAccountBalance;

    public:
        CBankAccount();
        void InitialBalance();
        void DepositCash();
        void WithDrawCash();
        float GetBalance();
};


#endif // CBANKACCOUNT_MANAGE_H_INCLUDED
