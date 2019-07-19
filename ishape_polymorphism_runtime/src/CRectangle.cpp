#include "CRectangle.h"

 void CRectangle::ReadData()
   {
       cout << "\n\t\t\tLength (in cm) : ";
       cin >> m_fLength;
       cout << "\n\t\t\tBreadth (in cm): ";
       cin >> m_fBreadth;
   }

   void CRectangle::DrawShape()
   {
       m_fRectangleArea = m_fLength * m_fBreadth;
       cout << "\n\t\t\t\tDrawing the Rectangle with area   ";
       cout<<m_fRectangleArea << " cm^2";
   }
