#ifndef CMANAGEACCOUNTS_H
#define CMANAGEACCOUNTS_H

#include "CBankAccount.h"
#include "CSavingsAccount.h"
#include "CCurrentAccount.h"
#include <stdlib.h>
#include <string>

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
};

#endif // CMANAGEACCOUNTS_H
