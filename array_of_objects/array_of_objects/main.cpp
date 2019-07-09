/**
 * File employeedetails_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the main function of the employeedetails program.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#include "arrayobject_manage.h"

int main()
{
    int nEmployeeCount;
    int nIterateCount = 0;
    int nChoiceDesignation;
    char designationAssign;


    cout << "***************EMPLOYEE REGISTRATION**********************\n";
    cout << "How many employee data you want to store ? ";
    cin >> nEmployeeCount;
    CEmployee Employee1[nEmployeeCount];

    while( nIterateCount < nEmployeeCount )
    {  //Employee1[nIterateCount].UserInterface();

        Employee1[nIterateCount].ReadDetails();
        Employee1[nIterateCount].DesignationRead();
        Employee1[nIterateCount].DisplayDetails();
    }
}

