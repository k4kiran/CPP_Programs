#include "CTriangle.h"

void CTriangle::ReadData()
   {
       cout << "\n\t\t\tBase length (in cm): ";
       cin >> m_fBase;
       cout << "\n\t\t\tHeight (in cm)     : ";
       cin >> m_fHeight;

   }

    void CTriangle::DrawShape()
   {
       m_fTriangleArea = (m_fBase * m_fHeight)/2;
       cout << "\n\t\t\t\tDrawing the Triangle with area   ";
       cout << m_fTriangleArea << " cm^2";
   }
