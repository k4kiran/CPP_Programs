#include "CTriangle.h"

void CTriangle::ReadData()
   {
       cout << "\nEnter the dimensions of Triangle:";
       cout << "\nBase = ";
       cin >> m_fBase;
       cout << "Height = ";
       cin >> m_fHeight;

   }

    void CTriangle::DrawShape()
   {
       m_fAreaTriangle = (m_fBase * m_fHeight)/2;
       cout << "\nDrawing the Triangle with area   ";
       cout << m_fAreaTriangle;
   }
