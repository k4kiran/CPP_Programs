/**
 * File employeedetails_manage.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of class " CEmployee ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#ifndef EMPLOYEEDETAILS_MANAGE_H_INCLUDED
#define EMPLOYEEDETAILS_MANAGE_H_INCLUDED

#include <iostream>
#define ARR_LENGTH 20

using namespace std;
/*
 * Class <CEmployee>
 * <A simple class which read and prints employee details.>
 * Author : Kiran Bal
 * Version : 1.0.0
 * Date : 05/07/2019
 *
 */
 
class CEmployee
{
    private:
        char m_szEmpName[ARR_LENGTH];
        int m_nAge;
        char m_szDesignation[ARR_LENGTH];
        int m_nSalary;
		
    public:
        void ReadDetails();
        void DisplayDetails();
};

#endif // EMPLOYEEDETAILS_MANAGE_H_INCLUDED
