
/**
 * File CSavingsAccount_manage.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CSavingsAccount.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 16-07-2019
 *
 */

#ifndef CSAVINGSACCOUNT_MANAGE_H_INCLUDED
#define CSAVINGSACCOUNT_MANAGE_H_INCLUDED

#include "CBankAccount_manage.h"

/**
* Class CSavingsAccount
* simple class to provide savings account.
* Author :Kiran Bal
* Version :1.0.0
* Date :16-07-2019
*
*/

class CSavingsAccount : public CBankAccount
{
    private:
        float m_fInterestRate = 0;

    public:
        CSavingsAccount();
        void GetInterestRate();
        void CalculateInterest();

};

#endif // CSAVINGSACCOUNT_MANAGE_H_INCLUDED
