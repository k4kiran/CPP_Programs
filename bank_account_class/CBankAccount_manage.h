
/**
 * File CBankAccount_manage.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CBankAccount.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 16-07-2019
 *
 */

#ifndef CBANKACCOUNT_MANAGE_H_INCLUDED
#define CBANKACCOUNT_MANAGE_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/**
* Class CBankAccount
* simple class to provide current account for user
* Author :Kiran Bal
* Version :1.0.0
* Date :16-07-2019
*
*/

class CBankAccount
{
    private:
        string szUserName;
        int nAge;
        string szAccountNumber;
        float m_fAccountBalance;

    public:
        CBankAccount();
        void InitialBalance();
        void DepositCash();
        void WithDrawCash();
        float GetBalance();
        void SetBalance( float );
        void TitleInterface();
        void UserDetails();
        void DisplayDetails();
        string GetAccountNo();
};


#endif // CBANKACCOUNT_MANAGE_H_INCLUDED
