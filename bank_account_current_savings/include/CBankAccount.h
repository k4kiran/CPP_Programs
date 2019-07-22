#ifndef CBANKACCOUNT_H
#define CBANKACCOUNT_H
#define MAXLENGTH 20

#include<iostream>
using namespace std;
class CBankAccount
{
    public:
        CBankAccount();
        CBankAccount( float );
        void DepositCash( float);
        void WithdrawCash( float );
        float GetBalance();
        void AssignBalance( float );
        void AddDetails();
        void DisplayDetails();
        string GetAccountNumber();
        string GetAccountType();
        void AssignType( string );

    protected:
        float fAccountBalance;
        string m_szUserName;
        int m_nAge;
        string m_szAccountNumber;
        string m_szAccountType;


    private:
};

#endif // CBANKACCOUNT_H
