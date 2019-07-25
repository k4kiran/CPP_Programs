#include "CManager.h"
#include "CStudent.h"
#include "CStaff.h"
#include "CTeachStaff.h"
#include "CNonTeachStaff.h"

CManager::CManager()
{
    //ctor
}

void CManager::ManagerStudent()
{
    CStudent student;
    student.ReadDetails();
    student.DisplayDetails();

    ofstream storefile;
    storefile.open("studentdata.dat", ios::app);
    if(!storefile)
    {
        cout << "\nError!! cant create file";
    }
    else
    {
        storefile.write((char*)&student ,sizeof(student));
        storefile.close();
    }
}

void CManager::ManagerStaff()
{
    //cant create object change to derived
    CStaff *staff;
    staff = new CNonTeachStaff;

    staff->StaffReadDetails();
    staff->StaffDisplayDetails();

    ofstream storefile;
    storefile.open("staffdata.dat", ios::app);
    if(!storefile)
    {
        cout <<"\nErrror!! cant create file";
    }
    else
    {
        storefile.write((char*)&staff, sizeof(staff));
        storefile.close();
    }
}
