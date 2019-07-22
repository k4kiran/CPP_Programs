#include "CManageAccounts.h"

CManageAccounts::CManageAccounts()
{
    //unimplemented
}

void CManageAccounts::AccountsManager()
{
    float fBalanceAmount;
    CBankAccount *Account1[MAXLENGTH];
    CSavingsAccount savingsaccount1[MAXLENGTH];
    CCurrentAccount currentaccount1[MAXLENGTH];
    int nMainChoice,nChoiceAdminMenu;
    int nContinueChoice;
    int nIterateVariable = 0;
    int nUserChoice;
    string szAcNumber;
    int nSelectedAccount;
    float fNewBalance;
    string szTypeAccount;
    int nChoiceType;
    while(1)
    {
        this->MainMenu();
        cin >> nMainChoice;
        switch( nMainChoice )
        {
        case 1:
            system( "CLS" );
            this->Title();
            do
            {
            this->AdminMenu();
            cin >> nChoiceAdminMenu;
            system( "CLS" );
            switch( nChoiceAdminMenu )
            {
            case 1:
                this->Title();
                do
                {
                    this->AccountTypeMenu();
                    repeat:
                    cin >> nChoiceType;
                    if(nChoiceType == 1)
                    {
                        system( "CLS" );
                        this->Title();
                        cout << "\n\n\n";
                        cout << "\t\t------------------------- Savings Account Registration -------------------";
                        Account1[nIterateVariable]= new CSavingsAccount;
                        Account1[nIterateVariable]->AddDetails();
                        Account1[nIterateVariable]->AssignType("Savings");
                        cout << "\n\n";
                        cout << string(40,' ') << "Enter initial Balance: ";
                        cin>>fNewBalance;
                        Account1[nIterateVariable]->AssignBalance(fNewBalance);
                        cout << "\n\n\n";
                        cout << string(40,' ') << "Data Stored Successfully.\n\n" << string(40,' ') << "Press any key to continue...\n\n\n";

                        //Account1[nIterateVariable]->DisplayDetails();
                        nIterateVariable++;
                    }

                    else if(nChoiceType == 2)
                    {
                        system( "CLS" );
                        this->Title();
                        cout << "\n\n\n";
                        cout << "\t\t------------------------- Current Account Registration -------------------";
                        Account1[nIterateVariable]= new CCurrentAccount;
                        Account1[nIterateVariable]->AddDetails();
                        Account1[nIterateVariable]->AssignType("Current");
                        cout << "\n\n";
                        cout << string(40,' ') << "Enter initial Balance: ";
                        cin >>fNewBalance;
                        Account1[nIterateVariable]->AssignBalance(fNewBalance);
                        cout << "\n\n\n";
                        cout << string(40,' ') << "Data Stored Successfully.\n\n" << string(40,' ') << "Press any key to continue...\n\n\n";
                        //add continue getchar;
                       // Account1[nIterateVariable]->DisplayDetails();
                        nIterateVariable++;
                    }
                    else
                    {
                        cout << "Please enter your preferred option from Menu: ";
                        goto repeat;
                    }

                    }while(nChoiceType >= 3);

                    break;
            case 2:
                cout << "\nEnter new interest rate:";
                float fNewInterest;
                cin >> fNewInterest;
                //check here make it static
                savingsaccount1[1].SetInterest(fNewInterest);
                break;
            case 3:
                int nNewFee;
                cout << "\nenter new fine amount:";
                cin >> nNewFee;
                //check here
                currentaccount1[1].UpdateFee( nNewFee );
                break;
            case 4:
                cout << "\nprinting Details";
                for( int i = 0;i < nIterateVariable;i++)
                {
                    Account1[i]->DisplayDetails();
                }
                break;
            default:cout <<"not ok";
            }

         break;

        case 2:
            int nAcNOCheckFlag = 0;
            system( "CLS");
            this->Title();
            cout << "\n\n\n\n\n";
            cout << string(40, ' ') << "Enter your Account Number:";
            cin >> szAcNumber;
            for (int i =0 ;i < nIterateVariable;i++)
            {
                if(Account1[i]->GetAccountNumber()==szAcNumber)
                {
                    nSelectedAccount = i;
                    nAcNOCheckFlag = 1;
                }
                else
                {
                    //not neccessary
                }
            }
            //check if found or not

            if(nAcNOCheckFlag == 0 )
            {
                cout << "Not found";
            }
            else
            {
            system( "CLS" );
            this->Title();
            //add formatting
            cout << "\n1.Deposit\n2.Withdraw\n3.View Balance";
            cin >> nUserChoice;

            switch(nUserChoice)
            {
            case 1:
                float fNewAmount;
                system( "CLS" );
                this->Title();
                cout << "\n\n\n";
                cout << string(40,' ') << "Deposit Cash\n";
                cout << string(40,' ') << "-------------\n\n\n";

                cout << string(40, ' ') << "\nDeposit amount: ";
                cin >>fNewAmount;
                Account1[nSelectedAccount]->DepositCash( fNewAmount );
                break;
            case 2:
                cout << "\nEnter the withdraw amount: ";
                cin >>fNewAmount;
                Account1[nSelectedAccount]->WithdrawCash( fNewAmount );
                break;

            case 3:

                cout << "Balance is " << Account1[nSelectedAccount]->GetBalance();
                break;



            default:cout << "Please enter valid option from menu: ";

            }
            }
        }while(nChoiceAdminMenu >5);

    case 9:
        cout << "\nExiting the program";
                exit(0);
                break;
    default: cout<<"please Enter Valid option from menu:";
    }
}
}

void CManageAccounts::Title()
{
    cout << "*************************************************** Bank Transactions ***********************************************";
}

void CManageAccounts::MainMenu()
{
        cout << "\n\n\n\n\n\n"<<string(40,' ') << "1.Administrator\n\n";
        cout << string(40,' ') << "2.Customer\n\n" << string(40,' ') << "9.Exit\n\n";
        cout << "\n\n" << string(40,' ') << "Enter your preferred choice(1 or 2) : ";
}

void CManageAccounts::AdminMenu()
{
        cout << "\n\n\n\n\n\n" << string(40,' ') << "1.New Registration\n\n" << string(40,' ') << "2.Change interest rate\n\n";
        cout << string(40,' ') << "3.change fee\n\n" << string(40,' ') << "4.View Details\n\n\n";
        cout << string(40,' ') << "Enter your preferred choice from Menu (1,2,3 or 4): ";
}

void CManageAccounts::AccountTypeMenu()
{
        cout << "\n\n\n\n\n" << string(40,' ') << "Account Type ";
        cout << "\n" << string(40,' ') << "-------------";
        cout << "\n\n\n";
        cout << string(40, ' ') << "1.Savings\n\n" << string(40,' ') << "2.Current\n\n\n\n";
        cout << string(40,' ') << "Enter your preferred choice from the menu (1 or 2): ";
}
