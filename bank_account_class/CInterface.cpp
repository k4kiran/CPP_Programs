
/**
 * File CInterface.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CInterface.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 16-07-2019
 *
 */

#include "CInterface.h"
#include "CSavingsAccount_manage.h"
#include <stdio.h>
#define LENGTH 20

// ---------------------------------------------------------------------------
// Method      : DisplayValue
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Display real and imaginary parts.
// ---------------------------------------------------------------------------

void CInterface::UserInterface()
{
 int nChoice;
 CSavingsAccount *StudentData[LENGTH];
 cout << " 1.Current account\n2.Savings account\nEnter your choice :";
 cin >> nChoiceMain;
 if( nChoiceMain == 1)
 {

 }
// CInterface *StudentData[LENGTH];

int nIterateData = 0;
StudentData[nIterateData] = new CSavingsAccount;
string szAcNumber;
string k;
//returnmenu:

while(1)
{
 cout <<"1.New User Registration\n2.Deposit\n3.Withdraw\n4.Balance Enquiry";
 cout << "\n5.EXIT\nEnter your preferred choice from the menu : ";
 cin >> nChoice;

 switch(nChoice)
 {
    case 1:
        system("CLS");
        StudentData[nIterateData]->UserDetails();
        StudentData[nIterateData]->DisplayDetails();
        StudentData[nIterateData]->InitialBalance();
        nIterateData++;
        cout << "\n\nData Stored Successfully\n";
        getch();
        system("CLS");
        //goto returnmenu;
        break;

    case 2:

        system("CLS");
        cout << "\nEnter your Account Number : ";
        cin >> szAcNumber;

        for(int nCheck = 0; nCheck < LENGTH; nCheck++ )
        {
            if( StudentData[nCheck]->GetAccountNo() == szAcNumber )
            {
                StudentData[nCheck]->DepositCash();
            }

        }
        break;


    default:
        cout << "\nInvalid Character";
 }
}
}
