
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

// -------------------------------------------------------
// Method      : ReadDetails
// Parameters  : Nil
// Returns     : void
// Description : Member Function to Read employee details
// -------------------------------------------------------

void CEmployee::ReadDetails()
{
        cout << "\n\t\t\t\tName         : ";
        getchar();
        getline(cin, m_szEmpName);
        cout << "\t\t\t\tAge(18-35)   : ";
        cin >> m_nAge;
        cout << "\t\t\t\tSalary       : ";
        cin >> m_nSalary;
 }

// --------------------------------------------------------------------
// Method      : DesignationRead
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read employee designation.
// --------------------------------------------------------------------

 void CEmployee::DesignationRead()
 {
        int nChoiceDesignation;
        cout << "\n\tDesignation List\n";
        cout << "\t-----------------\n";
        cout << "\t\t1.Programmer\n\t\t2.Data Analyst\n\t\t3.Web Designer\n";
        cout << "\nChoose designation from The menu: (1,2 or 3) : ";
        repeat:
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
                cout << "\nPlease enter valid option from the menu :";
                goto repeat;
        }
 }

// ----------------------------------------------------------
// Method      : DisplayDetails
// Parameters  : Nil
// Returns     : void
// Description : Member function to display employee details.
// ----------------------------------------------------------

void CEmployee::DisplayDetails( int nIterate )
{
    cout <<"\t\t\t";
    cout << nIterate + 1 << "\t\t";
    cout << m_szEmpName << "\t\t";
    cout << m_nAge << "\t";
    cout << m_nSalary << "\t\t";
    cout << m_szDesignation << "\n";
}

// ----------------------------------------------------------
// Method      : GetDesignationCode
// Parameters  : Nil
// Returns     : void
// Description : Member function to return designation code.
// ----------------------------------------------------------

int CEmployee::GetDesignationCode()
{
    return m_nDesignationCode;
}
