
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
#define MAXLENGTH 20

using namespace std;

class CStudentDetails
{
    private:
        char m_cRegisterNumber[MAXLENGTH];
        char m_cName[MAXLENGTH];
        char m_cGender[MAXLENGTH];
        char m_cCourse[MAXLENGTH];
        char m_cDateOfJoin[MAXLENGTH];

    public:
        void ReadDetails();
        void DisplayDetails();
       // void StoreDetails();
};

#endif // CSTUDENTDETAILS_H
