#ifndef CMANAGEACCOUNTS_H
#define CMANAGEACCOUNTS_H

#include "CBankAccount.h"
#include "CSavingsAccount.h"
#include "CCurrentAccount.h"
#include <stdlib.h>
#include <string>
#include <conio.h>

class CManageAccounts
{
    public:
        CManageAccounts();
        void AccountsManager();
        void Title();
        void MainMenu();
        void AdminMenu();
        void UserMenu();
        void RegistrationMenu();
        void AccountTypeMenu();

    protected:

    private:
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
};

#endif // CMANAGEACCOUNTS_H
