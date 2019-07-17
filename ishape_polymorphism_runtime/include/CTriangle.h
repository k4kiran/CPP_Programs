#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CInterface.h"

class CTriangle : public CIShape
{
  private:
    float m_fBase;
    float m_fHeight;
    float m_fTriangleArea;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CTRIANGLE_H
