#ifndef CSTUDENT_H
#define CSTUDENT_H
#include "CManager.h"
#define MAXSIZE 20

class CStudent
{
    public:
        CStudent();
        void ReadDetails();
        void DisplayDetails();


    protected:

    private:
        char m_cRegistrationNumber[MAXSIZE];
        char m_cName[MAXSIZE];
        char m_cGender[MAXSIZE];
        char m_cCourse[MAXSIZE];
        char m_cDateOfJoin[MAXSIZE];
};

#endif // CSTUDENT_H
