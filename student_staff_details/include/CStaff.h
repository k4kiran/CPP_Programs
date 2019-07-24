#ifndef CSTAFF_H
#define CSTAFF_H
#include "CManager.h"
#define MAXSIZE 20

class CStaff
{
    public:
        virtual void StaffReadDetails()=0;
        virtual void StaffDisplayDetails()=0;

    protected:

    private:

};

#endif // CSTAFF_H
