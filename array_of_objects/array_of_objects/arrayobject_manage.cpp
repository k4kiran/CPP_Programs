
/**
 * File arrayobject_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the member functions of  class " CEmployee ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#include<string.h>
#include "arrayobject_manage.h"

// --------------------------------------------------------------
// Method      : Display
// Parameters  :
//   <param 1> - <int> - Number of Employees.
//   <param 2> - <CEmployee *> - Object of CEmployee class
// Description : Function to Display Employee Details.
// --------------------------------------------------------------

void Display(int nCount, CEmployee *pEmployee1 )
{   cout << "\n\n********************EMPLOYEE DETAILS*************************\n";

    //Displaying details of programmers
    cout << "\n\n-------------------PROGRAMMERS------------------------\n";
    cout << "NAME\t\tAGE\tSALARY\t\tDESIGNATION\n\n";
    for( int nIterateValue = 0;nIterateValue < nCount;nIterateValue++ )
    {
        if( pEmployee1[nIterateValue].m_szDesignation == "Programmer" )
        {
            pEmployee1[nIterateValue].DisplayDetails();

        }
    }

    //Displaying details of Data Analysts
    cout << "\n\n-------------------DATA ANALYST------------------------\n";
    cout << "NAME\t\tAGE\tSALARY\t\tDESIGNATION\n\n";
    for( int nIterateValue = 0;nIterateValue < nCount;nIterateValue++ )
    {
        if( pEmployee1[nIterateValue].m_szDesignation == "Data Analyst" )
        {
            pEmployee1[nIterateValue].DisplayDetails();

        }
    }

    //Displaying details of Web Designers
    cout << "\n\n-------------------WEB DESIGNERS------------------------\n";
    cout << "NAME\t\tAGE\tSALARY\t\tDESIGNATION\n\n";
    for( int nIterateValue = 0;nIterateValue < nCount;nIterateValue++ )
    {
        if( pEmployee1[nIterateValue].m_szDesignation == "Web Designer" )
        {
            pEmployee1[nIterateValue].DisplayDetails();

        }
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
        cout << "\nEnter the name of employee: ";
        getchar();
        getline(cin, m_szEmpName);
        cout << "Enter age of employee: ";
        cin >> m_nAge;
        cout << "Enter the salary: ";
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
        cout << "\n****************Designation List***************\n";
        cout << "1.Programmer\n2.Data Analyst\n3.Web Designer\n";
        cout << "Choose designation from The menu: ";
        cin >> nChoiceDesignation;
        switch(nChoiceDesignation)
        {
            case 1:
                m_szDesignation = "Programmer";
                break;

            case 2:
                m_szDesignation = "Data Analyst";
                break;

            case 3:
                m_szDesignation = "Web Designer";
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

void CEmployee::DisplayDetails()
{
    cout << m_szEmpName << "\t\t";
    cout << m_nAge << "\t";
    cout << m_nSalary << "\t\t";
    cout << m_szDesignation << "\n";
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
