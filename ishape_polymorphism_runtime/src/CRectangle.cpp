#include "CRectangle.h"

 void CRectangle::ReadData()
   {
       cout << "\nEnter the dimensions of Rectangle:";
       cout << "\nLength = ";
       cin >> m_fLength;
       cout << "Breadth = ";
       cin >> m_fBreadth;
   }

   void CRectangle::DrawShape()
   {
       m_fAreaRectangle = m_fLength * m_fBreadth;
       cout << "\nDrawing the Rectangle with area   ";
       cout<<m_fAreaRectangle;
   }
