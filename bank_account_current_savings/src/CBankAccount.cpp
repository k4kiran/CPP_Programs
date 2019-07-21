#include "CBankAccount.h"
#include<iostream>
using namespace std;

CBankAccount::CBankAccount()
{
    //unimplemented
}
CBankAccount::CBankAccount( float fBalance )
{
if( fBalance <= 0.0)
{
    cout << "\nInvalid amount entered!!\n";
    fAccountBalance = 0.0;
}
else
{
    fAccountBalance = fBalance;
}
}

//check the argument
void CBankAccount::DepositCash( float fAmount )
{
if( fAmount<=0.0 )
{
cout << "Transaction unsucessful!!Please enter a valid amount.";
//return false;
}
fAccountBalance += fAmount;
cout << "Transaction completed succcessfully.";
//return true;

}

void CBankAccount::WithdrawCash( float fAmount )
{
if( fAmount<=0.0)
{
cout << "Transaction unsucessful!!Please enter a valid amount.";
//return false;
}
if(fAmount>fAccountBalance)
{
cout << "Transaction unsucessful!!Debit amount exceeded account balance.";
//return false;
}
fAccountBalance -= fAmount;
cout << "Transaction completed succcessfully.";
//return true;
}

float CBankAccount::GetBalancec()
{
return fAccountBalance;
}

void CBankAccount::AssignBalance( float fAmount )
{
    fAccountBalance = fAmount;
}


