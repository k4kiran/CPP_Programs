
/**
 * File CInterface.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of the CInterface class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 09-07-2019
 *
 */

#ifndef CINTERFACE_H_INCLUDED
#define CINTERFACE_H_INCLUDED
#include "arrayobject_manage.h"

/**
 * Class CInterface
 * Class for managing the functions
 * Author : Kiran Bal
 * Version : 1.0.0
 * Date : 05/07/2019
 *
 */

class CInterface
{
    private:

    public:
        void MainManageFunction();
        void UserInterface();
        void InterfaceTitle();
        void SortByDesignation( int , CEmployee * );
        void Display( int, CEmployee * );
};

#endif // CINTERFACE_H_INCLUDED
