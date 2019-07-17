#include "CCircle.h"

void CCircle::ReadData()
   {
       cout << "\nEnter the radius of the circle (in cm): ";
       cin >> m_fRadius;
   }

   void CCircle::DrawShape()
   {
       m_fCircleArea = 3.14 * m_fRadius * m_fRadius;
       cout << "\nDrawing the Circle with area   ";
       cout << m_fCircleArea << " cm^2";
   }
