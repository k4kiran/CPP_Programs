
/**
 * File CHouseProduct.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CHouseProduct class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */

#ifndef CHOUSEPRODUCT_H
#define CHOUSEPRODUCT_H
#include "CProduct.h"

/**
* Class CHouseProduct
* Derived class from CProduct to operate on household items.
* Author :Kiran Bal
* Version :1.0.0
* Date :26-07-2019
*
*/

class CHouseProduct : CProduct
{
    public:
        CHouseProduct();
        void AssignType();
        void ReadProduct();
        void DisplayProduct();
        char* GetProductId();

    protected:

    private:
};

#endif // CHOUSEPRODUCT_H
