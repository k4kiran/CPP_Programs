/**
 * File CRectangle.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CRectangle file.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */
#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include "CInterface.h"
/**
* Class CRectangle
* Class to read and draw rectangle using given dimentions.
* Author :Kiran Bal
* Version :1.0.0
* Date :18-07-2019
*
*/

class CRectangle : public CIShape
{
  private:
    float m_fLength;
    float m_fBreadth;
    float m_fRectangleArea;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CRECTANGLE_H
