#ifndef CMANAGER_H
#define CMANAGER_H
#include <iostream>
#include <fstream>
#include "CStudent.h"

using namespace std;

class CManager
{
    public:
        CManager();
        void ManagerStudent();
        void ManagerStaff();
        void StoreStudent();

    protected:

    private:
};

#endif // CMANAGER_H
