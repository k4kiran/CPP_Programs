
/**
 * File CStudentDetails.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CStudent class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */

#include "CStudentDetails.h"
#include<stdlib.h>


void CStudentDetails::ReadDetails()
{
    system("CLS");
    cout << "\n\n\n\n\n";
    cout << string(40,' ') << "Register Number                 :";
    cin >> m_cRegisterNumber;
    cout << "\n\n" << string(40,' ') << "Name                  :";
    cin >> m_cName;
    cout << "\n\n" << string(40,' ') << "Gender                :";
    cin >> m_cGender;
    cout << "\n\n" << string(40,' ') << "Course                :";
    cin >> m_cCourse;
    cout << "\n\n" << string(40,' ') << "Date of join (DDMMYY) :";
    cin >> m_cDateOfJoin;
}

void CStudentDetails::DisplayDetails()
{
    cout << "\n\n" << m_cRegisterNumber << "\t\t\t" << m_cName << "\t\t" << m_cGender << "\t\t" << m_cCourse << "\t\t" << m_cDateOfJoin;
}

