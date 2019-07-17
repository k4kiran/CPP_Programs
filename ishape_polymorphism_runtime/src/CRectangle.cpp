#include "CRectangle.h"

 void CRectangle::ReadData()
   {
       cout << "\nEnter the dimensions of Rectangle:";
       cout << "\nEnter the length (in cm): ";
       cin >> m_fLength;
       cout << "Enter the breadth (in cm): ";
       cin >> m_fBreadth;
   }

   void CRectangle::DrawShape()
   {
       m_fRectangleArea = m_fLength * m_fBreadth;
       cout << "\nDrawing the Rectangle with area   ";
       cout<<m_fRectangleArea << " cm^2";
   }
