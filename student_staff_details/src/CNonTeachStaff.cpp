#include "CNonTeachStaff.h"


void CNonTeachStaff::StaffReadDetails()
{
    cout << "\nNon teaching";
    cout << "\n\n" << string(40, ' ') << "Staff ID: ";
    cin >> m_cStaffId;
    cout << "\n\n" << string(40, ' ') << "Name: ";
    cin >> m_cStaffName;
    cout << "\n\n" << string(40, ' ') << "Gender: ";
    cin >> m_cStaffGender;
    cout << "\n\n" << string(40, ' ') << "Department: ";
    cin >> m_cDepartment;
    cout << "\n\n" << string(40, ' ') << "Date of join: ";
    cin >> m_cStaffDateOfJoin;
    cout << "\n\n" << string(40, ' ') << "Salary: ";
    cin >> m_nSalary;
}


void CNonTeachStaff::StaffDisplayDetails()
{
    cout << m_cStaffId << "\t\t" << m_cStaffName << "\t\t" << m_cStaffGender << "\t\t" << m_cDepartment << "\t\t" << m_cStaffDateOfJoin << "\t\t" << m_nSalary;
}
