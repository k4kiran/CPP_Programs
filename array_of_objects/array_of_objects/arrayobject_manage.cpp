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

// -------------------------------------------------------
// Method      : ReadDetails
// Parameters  : Nil
// Returns     : void
// Description : Reads employee details
// -------------------------------------------------------

void CEmployee::ReadDetails()
{

        cout << "Enter the name of Employee: ";
        getchar();
        getline(cin, m_szEmpName);
        cout << "Enter age of employee: ";
        cin >> m_nAge;

       // cout << "Enter designation: ";
       // cin >> m_szDesignation;
        cout << "Enter the salary: ";
        cin >> m_nSalary;
 }

 void CEmployee::DesignationRead()
 {
        int nChoiceDesignation;//remove
        cout << "1.Programmer\n2.Data Analyst\n3.Web Designer\nChoose Designation From The Menu: ";
        cin >> nChoiceDesignation;
        cout << nChoiceDesignation; //remove
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
                cout << "\nInvalid Character";
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
    cout << "\nName: " << m_szEmpName;
    cout << "\nAge: " << m_nAge;
    cout << "\nDesignation: " << m_szDesignation;
    cout << "\nSalary: " << m_nSalary <<"\n";
}

void CEmployee::UserInterface()

{
    cout << "***************EMPLOYEE REGISTRATION**********************\n";
    cout << "How many employee data you want to store ? ";

}
