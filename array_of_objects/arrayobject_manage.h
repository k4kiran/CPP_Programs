
/**
 * File ararayobject_manage.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of class " CEmployee ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 09-07-2019
 *
 */

#ifndef EMPLOYEEDETAILS_MANAGE_H_INCLUDED
#define EMPLOYEEDETAILS_MANAGE_H_INCLUDED

#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
/*
 * Class <CEmployee>
 * <A simple class which read employee details and prints employee details based on designation.>
 * Author : Kiran Bal
 * Version : 1.0.0
 * Date : 05/07/2019
 *
 */

class CEmployee
{
    private:
        string m_szEmpName;
        int m_nAge;
        string m_szDesignation;
        int m_nDesignationCode;
        int m_nSalary;
    public:
        void ReadDetails();
        void DesignationRead();
        friend void DisplayDetails( CEmployee *, int);
        friend void SortByDesignation(int, CEmployee * );
};
void UserInterface();

#endif // EMPLOYEEDETAILS_MANAGE_H_INCLUDED
