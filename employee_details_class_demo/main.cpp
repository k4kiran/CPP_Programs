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

#include "employeedetails_manage.h"

int main()
{
    CEmployee Employee1;
    Employee1.ReadDetails();
    Employee1.DisplayDetails();
    return 0;
}