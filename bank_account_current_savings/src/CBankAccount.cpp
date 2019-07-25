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

float CBankAccount::GetBalance()
{
return fAccountBalance;
}

void CBankAccount::AssignBalance( float fAmount )
{
    fAccountBalance = fAmount;
}


void CBankAccount::AddDetails()
{
    int nChoiceType;
    cout << "\n\n\n\n\n";
    cout << string(40, ' ') << "Name :";
    cin >> m_szUserName;
    cout << "\n\n";
    cout << string(40, ' ') << "Age :";
    cin >> m_nAge;
    cout << "\n\n";
    cout << string(40, ' ') << "Account Number : ";
    cin >> m_szAccountNumber;

}

void CBankAccount::DisplayDetails()
{
    /*cout << "\nName :"<<m_szUserName;
    cout << "\nAge :"<<m_nAge;
    cout << "\nAccount Number "<<m_szAccountNumber;
    cout << "\nType:"<<m_szAccountType;
    */

    cout << "\n\n" << string(10, ' ') << m_szUserName << "\t\t" << m_nAge << "\t\t" << m_szAccountNumber << "\t\t" << m_szAccountType << "\t\t" << fAccountBalance;

}
string CBankAccount::GetAccountNumber()
{
    return m_szAccountNumber;
}

string CBankAccount::GetAccountType()
{
    return m_szAccountType;
}

void CBankAccount::AssignType( string TypeAccount )
{
    m_szAccountType = TypeAccount;
}
