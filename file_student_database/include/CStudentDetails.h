
/**
 * File CStudentDetails.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CStudent class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */

#ifndef CSTUDENTDETAILS_H
#define CSTUDENTDETAILS_H
#include "CInterface.h"

using namespace std;

class CStudentDetails
{
    private:
        string m_szName;
        string m_szGender;
        string m_szCourse;
        string m_szDateOfJoin;

    public:
        void ReadDetails();
        void DisplayDetails();
};

#endif // CSTUDENTDETAILS_H
