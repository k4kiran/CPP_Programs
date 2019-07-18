
/**
 * File CCurrentAccount_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains declaration of Currrent account class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 17-07-2019
 *
 */

#ifndef CCURRENTACCOUNT_MANAGE_H_INCLUDED
#define CCURRENTACCOUNT_MANAGE_H_INCLUDED

#include "CBankAccount_manage.h"

/**
* Class CCurrentAccount
* simple class to provide base bank account class
* Author :Kiran Bal
* Version :1.0.0
* Date :16-07-2019
*
*/

class CCurrentAccount : public CBankAccount
{
    private:

    public:
        void WithDrawCash();

};


#endif // CCURRENTACCOUNT_MANAGE_H_INCLUDED
