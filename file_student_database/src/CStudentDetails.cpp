
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


void CStudentDetails::ReadDetails()
{
    cout << "\nName                  :";
    cin >> m_cName;
    //fstream file1;
    //file1.open("new.txt", ios::out);
    cout << "\nGender                :";
    cin >> m_cGender;
    cout << "\nCourse                :";
    cin >> m_cCourse;
    cout << "\nDate of join (DDMMYY) :";
    cin >> m_cDateOfJoin;
}

void CStudentDetails::DisplayDetails()
{
    cout << "\nName         :" << m_cName;
    cout << "\nGender       :" << m_cGender;
    cout << "\nCourse       :" << m_cCourse;
    cout << "\nDate of join :" << m_cDateOfJoin;
}

