
#include "CManager.h"


int main()
{
    int choice;
    CManager manage;
    cout << "student? ";
    cin >> choice;
    if(choice == 0)
    {
         manage.ManagerStudent();
    }
    else
    {
        manage.ManagerStaff();
    }


    return 0;
}
