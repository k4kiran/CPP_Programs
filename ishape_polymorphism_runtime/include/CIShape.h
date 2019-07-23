
/**
 * File CInterface.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CInterface class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */

#ifndef CISHAPE_H
#define CISHAPE_H

#include <iostream>
#include <stdlib.h>
#define LENGTH 20

using namespace std;

/**
* Class CIShape
* Base class of CRectangle, CTriangle, CCircle class.
* Author :Kiran Bal
* Version :1.0.0
* Date :18-07-2019
*
*/
class CIShape
{
    public:
      virtual void ReadData()=0;
      virtual void DrawShape()=0;
};

#endif // CISHAPE_H
