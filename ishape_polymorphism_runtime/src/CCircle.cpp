
/**
 * File CCircle.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CCircle class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */

#include "CCircle.h"

// ---------------------------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Read input data.
// ---------------------------------------------------------------------------

void CCircle::ReadData()
   {
       cout << "\n\t\t\tRadius (in cm): ";
       cin >> m_fRadius;
   }

// ---------------------------------------------------------------------------
// Method      : DrawShape
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Draw the shapes.
// ---------------------------------------------------------------------------

   void CCircle::DrawShape()
   {
       m_fCircleArea = 3.14 * m_fRadius * m_fRadius;
       cout << "\n\t\t\t\tDrawing the Circle with area   ";
       cout << m_fCircleArea << " cm^2";
   }
