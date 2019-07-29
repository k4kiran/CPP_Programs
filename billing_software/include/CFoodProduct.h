
/**
 * File CFoodProduct.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CFoodProduct class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */
#ifndef CFOODPRODUCT_H
#define CFOODPRODUCT_H
#include "CProduct.h"

/**
* Class CFoodProduct
* Derived class from CProduct to operate on food items.
* Author :Kiran Bal
* Version :1.0.0
* Date :26-07-2019
*
*/

class CFoodProduct : public CProduct
{
    public:
        CFoodProduct();
        void AssignType();
        void ReadProduct();
        void DisplayProduct();
        char* GetProductId();

    protected:

    private:
};

#endif // CFOODPRODUCT_H
