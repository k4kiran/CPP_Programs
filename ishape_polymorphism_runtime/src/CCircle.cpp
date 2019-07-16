#include "CCircle.h"

void CCircle::ReadData()
   {
       cout << "\nEnter the radius of the circle: ";
       cin >> m_fRadius;
   }

   void CCircle::DrawShape()
   {
       m_fAreaCircle = 3.14 * m_fRadius * m_fRadius;
       cout << "\nDrawing the Circle with area   ";
       cout << m_fAreaCircle;
   }
