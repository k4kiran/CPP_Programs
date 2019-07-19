#include "CCircle.h"

void CCircle::ReadData()
   {
       cout << "\n\t\t\tRadius (in cm): ";
       cin >> m_fRadius;
   }

   void CCircle::DrawShape()
   {
       m_fCircleArea = 3.14 * m_fRadius * m_fRadius;
       cout << "\n\t\t\t\tDrawing the Circle with area   ";
       cout << m_fCircleArea << " cm^2";
   }
