
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

#include "CTriangle.h"


// ---------------------------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Read input data.
// ---------------------------------------------------------------------------

void CTriangle::ReadData()
   {
       cout << "\n\t\t\tBase length (in cm): ";
       cin >> m_fBase;
      // if (cin.fail())
  //  {
        cout << "Enter only an integer please." << endl;
  //  }

      // if(m_fBase >0 && m_fBase)

       cout << "\n\t\t\tHeight (in cm)     : ";
       cin >> m_fHeight;
   }

// ---------------------------------------------------------------------------
// Method      : DrawShape
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Draw the shapes.
// ---------------------------------------------------------------------------

    void CTriangle::DrawShape()
   {
       m_fTriangleArea = (m_fBase * m_fHeight)/2;
       cout << "\n\t\t\t\tDrawing the Triangle with area   ";
       cout << m_fTriangleArea << " cm^2";
   }
