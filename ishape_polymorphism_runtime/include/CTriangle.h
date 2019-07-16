#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CIShape.h"
#include "CInterface.h"

class CTriangle : public CIshape
{
  private:
    float m_fBase;
    float m_fHeight;
    float m_fAreaTriangle;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CTRIANGLE_H
