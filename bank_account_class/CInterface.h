
/**
 * File CInterface.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CInterface.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 16-07-2019
 *
 */

#ifndef CINTERFACE_H_INCLUDED
#define CINTERFACE_H_INCLUDED
#include "CBankAccount_manage.h"

/**
* Class CInterface
* simple class to provide user interface for bank account.
* Author :Kiran Bal
* Version :1.0.0
* Date :16-07-2019
*
*/

class CInterface : public CBankAccount
{
    private:

    public:
        void UserInterface();
};

#endif // CINTERFACE_H_INCLUDED
