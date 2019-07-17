#include "CTriangle.h"

void CTriangle::ReadData()
   {
       cout << "\nEnter the dimensions of Triangle :";
       cout << "\nEnter the base length (in cm): ";
       cin >> m_fBase;
       cout << "Enter the Height (in cm: ";
       cin >> m_fHeight;

   }

    void CTriangle::DrawShape()
   {
       m_fTriangleArea = (m_fBase * m_fHeight)/2;
       cout << "\nDrawing the Triangle with area   ";
       cout << m_fTriangleArea << " cm^2";
   }
