#ifndef CBANKACCOUNT_H
#define CBANKACCOUNT_H

#include<iostream>
using namespace std;
class CBankAccount
{
    public:
        CBankAccount();
        CBankAccount( float );
        void DepositCash( float);
        void WithdrawCash( float );
        float GetBalancec();
        void AssignBalance( float );

    protected:
        float fAccountBalance;


    private:
};

#endif // CBANKACCOUNT_H
