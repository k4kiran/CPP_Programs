/**
 * File employeedetails.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the member functions of  class " CEmployee ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#include "employeedetails_manage.h"

// -------------------------------------------------------
// Method      : ReadDetails
// Parameters  : Nil
// Returns     : void
// Description : Reads employee details
// -------------------------------------------------------

void CEmployee::ReadDetails()
{
    cout << "Enter the name of Employee: ";
    cin >> m_szEmpName;
    cout << "Enter age of employee: ";
    cin >> m_nAge;
    cout << "Enter designation: ";
    cin >> m_szDesignation;
    cout << "Enter the salary: ";
    cin >> m_nSalary;
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