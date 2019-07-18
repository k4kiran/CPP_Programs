
/**
 * File CBankAccount_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains implementation of Bank Account Problem.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 17-07-2019
 *
 */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "CBankAccount_manage.h"

using namespace std;

// --------------------------------------------------------------
// Method      : Constructor
// Parameters  : Nil
// Returns     : void
// Description : To initialize balance.
// --------------------------------------------------------------

CBankAccount::CBankAccount()
{
    m_fAccountBalance = 0;
}

// --------------------------------------------------------------
// Method      : InitialBalance
// Parameters  : Nil
// Returns     : void
// Description : To set balance to initial value.
// --------------------------------------------------------------

void CBankAccount::InitialBalance()
{
    float fInitialBalance;
    cout << "\nEnter Your Initial Balance : ";
    cin >> fInitialBalance;
    m_fAccountBalance = fInitialBalance;
}

// --------------------------------------------------------------
// Method      : DepositCash
// Parameters  : Nil
// Returns     : void
// Description : Member Function to deposit cash.
// --------------------------------------------------------------

void CBankAccount::DepositCash()
{       float fDepositAmount;
        cout << "\nEnter the Deposit Amount (Rs) : ";
        cin >> fDepositAmount;
        m_fAccountBalance += fDepositAmount;
        cout << "\nYour Final Balance : " << m_fAccountBalance;
}

// --------------------------------------------------------------
// Method      : WithDrawCash
// Parameters  : Nil
// Returns     : void
// Description : Member Function to withdraw cash.
// --------------------------------------------------------------

void CBankAccount::WithDrawCash()
{
    float fWithdrawAmount;
    cout << "\nEnter the Withdraw Amount (Rs) : ";
    cin >> fWithdrawAmount;
    m_fAccountBalance -=fWithdrawAmount;
    cout << "\nYour Final Balance : " << m_fAccountBalance;
}

// --------------------------------------------------------------
// Method      : GetBalance
// Parameters  : Nil
// Returns     : void
// Description : Member Function to Check Balance in account.
// --------------------------------------------------------------

float CBankAccount::GetBalance()
{
     return m_fAccountBalance;
}

void CBankAccount::SetBalance( float fUpdateBalance )
{
    m_fAccountBalance = fUpdateBalance;
}

// --------------------------------------------------------------
// Method      : TitleInterface
// Parameters  : Nil
// Returns     : void
// Description : Member Function to provide interface.
// --------------------------------------------------------------

void CBankAccount::TitleInterface()
{
    cout << "**************************BANK ACCOUNT*********************\n\n";
}

// --------------------------------------------------------------
// Method      : UserDetails
// Parameters  : Nil
// Returns     : void
// Description : Member Function to get details from user.
// --------------------------------------------------------------

void CBankAccount::UserDetails()
{
    cout << "Account Details\n";
    cout <<"------------------\n";
    cout << "Name : ";
    cin >> szUserName;
    cout << "Age : ";
    cin >> nAge;
    cout << "Account Number : ";
    cin >> szAccountNumber;
}

void CBankAccount::DisplayDetails()
{
    cout << "\nName: " << szUserName;
    cout << "\nAccount Number: " << szAccountNumber;
}

string CBankAccount::GetAccountNo()
{
    return szAccountNumber;
}
