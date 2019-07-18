#include "CInterface.h"
#include "stdlib.h"

void CInterface::UserInterfaceMain()
{
    int nEmployeeCount;
    int nIterateCount = 0;

    this->UserInterface();
    cin >> nEmployeeCount;
    system("CLS");
    this->InterfaceTitle();
    //cout << "\n\n\n\n\t\t\t\tYou can enter details of " << nEmployeeCount << " employees";
    //cout << "\n\t\t\t\t\t------------------------------";
    CEmployee Employee1[nEmployeeCount];
    while( nIterateCount < nEmployeeCount )
    {
        system("CLS");
        this->InterfaceTitle();
        cout << "\n\n\n\n\t\t\t\tYou can enter details of " << nEmployeeCount << " employees";
        cout << "\n\n\t\t\t\t\t\tEmployee " << nIterateCount + 1 << "\n";
        cout << "\t\t\t\t\t\t----------";
        Employee1[nIterateCount].ReadDetails();
        Employee1[nIterateCount].DesignationRead();
        nIterateCount++;
    }
    system("CLS");
    this->InterfaceTitle();
    SortByDesignation(nEmployeeCount, Employee1 );
    cout << "\n\n\n";
}

// -------------------------------------------------------
// Method      : UserInterface
// Parameters  : Nil
// Returns     : void
// Description : Function to print UserInterface
// -------------------------------------------------------

void CInterface::UserInterface()
{
    this->InterfaceTitle();
    cout << "\nThis program lets you store employee details and display based on the designation\n";
    cout << "-------------------------------------------------------------------------------------\n";
    cout << "\nHow many employee data you want to store ? ";
}

void CInterface::InterfaceTitle()
{
    cout << "**************************************\tEMPLOYEE REGISTRATION\t********************************\n";
}
