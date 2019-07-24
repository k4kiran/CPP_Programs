#ifndef CTEACHSTAFF_H
#define CTEACHSTAFF_H
#include "CStaff.h"

class CTeachStaff : public CStaff
{
    public:
        void StaffReadDetails();
        void StaffDisplayDetails();


    protected:

    private:
        char m_cStaffId[MAXSIZE];
        char m_cStaffName[MAXSIZE];
        char m_cStaffGender[MAXSIZE];
        char m_cDepartment[MAXSIZE];
        char m_cStaffDateOfJoin[MAXSIZE];
        int m_nSalary;
};

#endif // CTEACHSTAFF_H
