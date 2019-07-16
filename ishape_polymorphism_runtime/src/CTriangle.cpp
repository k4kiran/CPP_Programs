#include "CTriangle.h"

CTriangle::CTriangle()
{
    m_fBase = 0;
    m_fHeight = 0;
    m_fArea = 0;
}


void CTriangle::ReadData()
{
    cout << "\nSelected shape is Triangle";
    cout << "\nPlease enter the base of triangle: ";
    cin >> m_fBase;
    cout << "\nPlease enter the height of triangle: ";
    cin >> m_fHeight;
    m_fArea = m_fBase * m_fHeight;
}

void CTriangle::DrawShape()
{
 cout << "Drawing Triangle Of Area";
}
