
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
    cin >> m_szName;
    //fstream file1;
    //file1.open("new.txt", ios::out);
    cout << "\nGender                :";
    cin >> m_szGender;
    cout << "\nCourse                :";
    cin >> m_szCourse;
    cout << "\nDate of join (DDMMYY) :";
    cin >> m_szDateOfJoin;
}

void CStudentDetails::DisplayDetails()
{
    cout << "\nName         :" << m_szName;
    cout << "\nGender       :" << m_szGender;
    cout << "\nCourse       :" << m_szCourse;
    cout << "\nDate of join :" << m_szDateOfJoin;
}

