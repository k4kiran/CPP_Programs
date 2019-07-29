
/**
 * File CManager.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition CManager class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */

#ifndef CMANAGER_H
#define CMANAGER_H

#include <iostream>
#include <stdlib.h>
#include "CProduct.h"
#include "CFoodProduct.h"
#include "CHouseProduct.h"
#include "CAdmin.h"

using namespace std;

/**
* Class CManager
* Class for basic interface and function calling.
* Author :Kiran Bal
* Version :1.0.0
* Date :26-07-2019
*
*/

class CManager
{
    public:
        CManager();
        void MainManager();
        void MainTitle();
        void MainMenu();
        void TypeMenu();
        void AdminMenu();
        void CustomerMenu();
        void WriteFood();
        void ReadFood();
        void WriteHouseHold();
        void ReadHouseHold();
        void SearchProduct();
        void HeadingOutput();

    protected:

    private:
        CAdmin admin;
        CFoodProduct food;
        CHouseProduct house;
        char cChoicemainMenu[MAX_SIZE];
        char cChoiceAdmin[MAX_SIZE];
        char cChoiceType[MAX_SIZE];
        int nChoiceTypeMenu;
        int nChoiceAdminMenu;
};

#endif // CMANAGER_H
