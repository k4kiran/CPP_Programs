#include "CInterface.h"
#include "CAccount.h"

CInterface::CInterface()
{
    //ctor
}

void CInterface::UserInterface()
{

    cout<<"*************************BANK ACCOUNT*************************\n";
    do
    {
        int nAccountChoice;
        cout << "\n1.Savings\n2.Current\nEnter your choice: ";
        cin >> nAccountChoice;
        switch(nAccountChoice)
        {

        case 1:
            CAccount account;
            account.display();
            break;
        default:cout<<"implement";


        }
    }
}
