
/**
 * File main.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the main function of the arrayobect_manage program.
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

    UserInterface();
    cin >> nEmployeeCount;
    cout << "You can enter details of " << nEmployeeCount << " employees\n\n";
    CEmployee Employee1[nEmployeeCount];
    while( nIterateCount < nEmployeeCount )
    {
        cout << "\nDetails of employee " << nIterateCount + 1 << "\n";
        Employee1[nIterateCount].ReadDetails();
        Employee1[nIterateCount].DesignationRead();
        nIterateCount++;
    }
    Display( nEmployeeCount, Employee1 );
}

