

/**
 * File CAdmin.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CAdmin class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */

#ifndef CADMIN_H
#define CADMIN_H

#include "CFoodProduct.h"
#include "CHouseProduct.h"
#include "CProduct.h"

/**
* Class CAdmin
* Class to control operations defined for administrator.
* Author :Kiran Bal
* Version :1.0.0
* Date :26-07-2019
*
*/

class CAdmin
{
    public:
        CAdmin();
        void CreateProduct( int );
        void DisplayProduct();
        void ModifyProduct();
        void DeleteProduct();
        void SearchProduct();

    protected:

    private:
};

#endif // CADMIN_H
