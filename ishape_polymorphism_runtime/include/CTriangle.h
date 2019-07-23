
/**
 * File CTriangle.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the declaration of CTriangle class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */

#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CInterface.h"

/**
* Class CTriangle
* class to read details and draw triangle by calculating area.
* Author :Kiran Bal
* Version :1.0.0
* Date :18-07-2019
*
*/

class CTriangle : public CIShape
{
  private:
    float m_fBase;
    float m_fHeight;
    float m_fTriangleArea;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CTRIANGLE_H
