
/**
 * File CInterface.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definitions of CInterface class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 09-07-2019
 *
 */

#include "CInterface.h"
#include "stdlib.h"

// -------------------------------------------------------
// Method      : MainManageFunction
// Parameters  : Nil
// Returns     : void
// Description : Function to print UserInterface
// -------------------------------------------------------

void CInterface::MainManageFunction()
{
    int nEmployeeCount;
    int nIterateCount = 0;

    this->UserInterface();
    cin >> nEmployeeCount;
    system("CLS");
    this->InterfaceTitle();
    CEmployee Employee1[nEmployeeCount];
    while( nIterateCount < nEmployeeCount )
    {
        system("CLS");
        this->InterfaceTitle();
        cout << "\n\n\n\n\t\t\t\tYou can enter details of " << nEmployeeCount << " employees";
        cout << "\n\n\t\t\t\t\t\tEmployee " << nIterateCount + 1 << "\n";
        cout << "\t\t\t\t\t\t----------";
        Employee1[nIterateCount].ReadDetails();
        Employee1[nIterateCount].DesignationRead();
        nIterateCount++;
    }
    system("CLS");
    this->InterfaceTitle();
    this->SortByDesignation(nEmployeeCount, Employee1 );
    cout << "\n\n\n";
}

// -------------------------------------------------------
// Method      : UserInterface
// Parameters  : Nil
// Returns     : void
// Description : Function to print UserInterface
// -------------------------------------------------------

void CInterface::UserInterface()
{
    this->InterfaceTitle();
    cout << "\nThis program lets you store employee details and display based on the designation\n";
    cout << "-------------------------------------------------------------------------------------\n";
    cout << "\nHow many employee data you want to store ? ";
}

// -------------------------------------------------------
// Method      : UserInterfaceTitle
// Parameters  : Nil
// Returns     : void
// Description : Function to print UserInterface title
// -------------------------------------------------------

void CInterface::InterfaceTitle()
{
    cout << "**************************************\tEMPLOYEE REGISTRATION\t********************************\n";
}


// --------------------------------------------------------------------
// Method      : SortByDesignation
// Parameters  :
//    <param 1> - <int> - total number of employee.
//    <param 2> - <CEmployee> - object of class CEmployee.
// Returns     : void
// Description : function to sort employee by designation.
// --------------------------------------------------------------------

void CInterface::SortByDesignation( /*IN*/ int nCountEmployee, /*IN*/ CEmployee *pEmployee2 )
{
    CEmployee TempObject;
    for( int nCount = nCountEmployee -1;nCount > 0;nCount--)
    {
        for(int i = 0;i < nCountEmployee;i++ )
        {
            if( pEmployee2[i].GetDesignationCode() > pEmployee2[i +1].GetDesignationCode() )
            {
                TempObject = pEmployee2[i +1];
                pEmployee2[i +1] = pEmployee2[i];
                pEmployee2[i] = TempObject;
            }
            else
            {
                //unimplemented
            }
        }
    }
    this->Display( nCountEmployee,pEmployee2 );
}

// --------------------------------------------------------------------
// Method      : Display
// Parameters  :
//    <param 1> - <int> - total number of employee.
//    <param 2> - <CEmployee> - object of class CEmployee.
// Returns     : void
// Description : function to display employee details
// --------------------------------------------------------------------

void CInterface::Display( int nCountEmployee, CEmployee *pEmployee2 )
{
    cout << "\n\n\n\n\t\t\t------------------------ EMPLOYEE DETAILS ----------------------------\n";
    cout << "\n\n\n\t\t\tSl No\t\tNAME\t\tAGE\tSALARY\t\tDESIGNATION\n\n";
    for( int i=0;i < nCountEmployee; i++)
    {
        pEmployee2[i].DisplayDetails( i );
    }
}
