
/**
 * File CProduct.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CProduct class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */

#ifndef CPRODUCT_H
#define CPRODUCT_H
#define MAX_SIZE 20
#include <iostream>
#include <string>
#include "CValid.h"
#include <conio.h>

using namespace std;

/**
* Class CProduct
* class having basic operations on products such as read and display.
* Author :Kiran Bal
* Version :1.0.0
* Date :26-07-2019
*
*/

class CProduct
{
    public:
        CProduct();
        void ReadProduct();
        void DisplayProduct();

    protected:
        char m_cProductId[MAX_SIZE];
        char m_cProductName[MAX_SIZE];
        char m_cPrice[MAX_SIZE];
        char m_cQuantity[MAX_SIZE];
        char m_cProductCompany[MAX_SIZE];
        char m_cProductType[MAX_SIZE];
        char m_cManufactureDate[MAX_SIZE];
};

#endif // CPRODUCT_H
