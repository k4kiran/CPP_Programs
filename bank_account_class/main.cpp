
/**
 * File main.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains main function of Bank account function.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 17-07-2019
 *
 */

#include "CBankAccount_manage.h"
#include "CSavingsAccount_manage.h"
#include "CCurrentAccount_manage.h"
#include "CInterface.h"

int main()
{
    /*
    float fBalance;
    CSavingsAccount Account1;
    Account1.UserInterface();
    Account1.UserDetails();
    Account1.InitialBalance();
    Account1.GetInterestRate();
    fBalance = Account1.GetBalance();
    cout << "\nYour Current Balance : " << fBalance;
    Account1.DepositCash();
    Account1.CalculateInterest();
    Account1.WithDrawCash();
    */
   // while(1)
   // {
    CInterface account2;
    account2.TitleInterface();
    account2.UserInterface();
//  account2.UserDetails();
//    account2.SetBalance( 100000 );
//    account2.WithDrawCash();

//    }

    return 0;
}
