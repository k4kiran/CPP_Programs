
/**
 * File arrayobject_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the member functions of  class " CEmployee ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 09-07-2019
 *
 */

#include<string.h>
#include "arrayobject_manage.h"

void SortByDesignation( /*IN*/ int nCountEmployee, /*IN*/ CEmployee *pEmployee2 )
{
    CEmployee TempObject;
    for( int nCount = nCountEmployee -1;nCount > 0;nCount--)
    {
        for(int i = 0;i < nCountEmployee;i++ )
        {
            if( pEmployee2[i].m_nDesignationCode > pEmployee2[i +1].m_nDesignationCode )
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
    //testing output
    cout << "\n\n********************EMPLOYEE DETAILS*************************\n";
    cout << "\nNAME\t\tAGE\tSALARY\t\tDESIGNATION\n\n";
    for( int i=0;i < nCountEmployee; i++)
    {

        DisplayDetails( pEmployee2, i );
    }
}

// -------------------------------------------------------
// Method      : ReadDetails
// Parameters  : Nil
// Returns     : void
// Description : Member Function to Read employee details
// -------------------------------------------------------

void CEmployee::ReadDetails()
{
        cout << "\nName : ";
        getchar();
        getline(cin, m_szEmpName);
        cout << "Age:(18-35) : ";
        cin >> m_nAge;
        cout << "Salary : ";
        cin >> m_nSalary;
 }

// -------------------------------------------------------
// Method      : DesignationRead
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read employee designation.
// -------------------------------------------------------

 void CEmployee::DesignationRead()
 {
        int nChoiceDesignation;
        cout << "\nDesignation List\n";
        cout << "-----------------\n\n";
        cout << "1.Programmer\n2.Data Analyst\n3.Web Designer\n";
        cout << "Choose designation from The menu: (1,2 or 3) : ";
        cin >> nChoiceDesignation;
        switch(nChoiceDesignation)
        {
            case 1:
                m_szDesignation = "Programmer";
                m_nDesignationCode = 1;
                break;

            case 2:
                m_szDesignation = "Data Analyst";
                m_nDesignationCode = 2;
                break;

            case 3:
                m_szDesignation = "Web Designer";
                m_nDesignationCode = 3;
                break;

            default:
                cout << "\nPlease enter valid option from the menu";
        }
 }

// -------------------------------------------------------
// Method      : DisplayDetails
// Parameters  : Nil
// Returns     : void
// Description : Displays employee details
// -------------------------------------------------------

void DisplayDetails( /*IN*/ CEmployee *pEmployee3, /*IN*/ int nIterate )
{
    cout << pEmployee3[nIterate].m_szEmpName << "\t\t";
    cout << pEmployee3[nIterate].m_nAge << "\t";
    cout << pEmployee3[nIterate].m_nSalary << "\t\t";
    cout << pEmployee3[nIterate].m_szDesignation << "\n";
}

// -------------------------------------------------------
// Method      : UserInterface
// Parameters  : Nil
// Returns     : void
// Description : Function to print UserInterface
// -------------------------------------------------------

void UserInterface()
{
    cout << "**************************************\tEMPLOYEE REGISTRATION\t********************************\n";
    cout << "\nThis program lets you store employee details and display based on the designation\n";
    cout << "-------------------------------------------------------------------------------------\n";
    cout << "\nHow many employee data you want to store ? ";
}
