#include "CStudent.h"

CStudent::CStudent()
{
    //ctor
}

void CStudent::ReadDetails()
{
    cout << "\n\n" << string(40, ' ') << "Register Nmber: ";
    cin >> m_cRegistrationNumber;
    cout << "\n\n" << string(40, ' ') << "Name: ";
    cin >> m_cName;
    cout << "\n\n" << string(40, ' ') << "Gender: ";
    cin >> m_cGender;
    cout << "\n\n" << string(40, ' ') << "Course: ";
    cin >> m_cCourse;
    cout << "\n\n" << string(40, ' ') << "DateOfJoin: ";
    cin >> m_cDateOfJoin;

}

void CStudent::DisplayDetails()
{
    cout << m_cRegistrationNumber << "\t\t" << m_cName << "\t\t" << m_cGender << "\t\t" << "\t\t" << m_cCourse << "\t\t" << m_cDateOfJoin;
}
