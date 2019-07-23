/**
 * File CRectangle.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CRectangle class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */

#include "CRectangle.h"

// ---------------------------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Read input data.
// ---------------------------------------------------------------------------

void CRectangle::ReadData()
   {
       cout << "\n\t\t\tLength (in cm) : ";
       cin >> m_fLength;
       cout << "\n\t\t\tBreadth (in cm): ";
       cin >> m_fBreadth;
   }

// ---------------------------------------------------------------------------
// Method      : DrawShape
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Draw the shapes.
// ---------------------------------------------------------------------------

void CRectangle::DrawShape()
   {
       m_fRectangleArea = m_fLength * m_fBreadth;
       cout << "\n\t\t\t\tDrawing the Rectangle with area   ";
       cout<<m_fRectangleArea << " cm^2";
   }
