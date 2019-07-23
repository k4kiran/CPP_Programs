
/**
 * File CInterface.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CInterface class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */

#ifndef CINTERFACE_H
#define CINTERFACE_H

#include <stdlib.h>
#include <conio.h>
#include "CCircle.h"
#include "CRectangle.h"
#include "CTriangle.h"
#include "CIShape.h"

/**
* Class CInterface
* class to manage all functions.
* Author :Kiran Bal
* Version :1.0.0
* Date :18-07-2019
*
*/

class CInterface
{
private:
     int nCount = 0;
     CIShape *Shapes[LENGTH];
public:
    void Manager();
    void InterfaceTitle();
    void ReadDetails( int );
};

#endif // CINTERFACE_H
