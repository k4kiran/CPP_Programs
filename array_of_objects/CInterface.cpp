#include "CInterface.h"


void CInterface::UserInterfaceMain()
{
    int nEmployeeCount;
    int nIterateCount = 0;

    UserInterface();
    cin >> nEmployeeCount;
    cout << "You can enter details of " << nEmployeeCount << " employees\n\n";
    CEmployee Employee1[nEmployeeCount];
    while( nIterateCount < nEmployeeCount )
    {
        cout << "\nDetails of employee " << nIterateCount + 1 << "\n";
        Employee1[nIterateCount].ReadDetails();
        Employee1[nIterateCount].DesignationRead();
        nIterateCount++;
    }
    SortByDesignation(nEmployeeCount, Employee1 );
}
