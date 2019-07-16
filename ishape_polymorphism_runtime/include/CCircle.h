#ifndef CCIRCLE_H
#define CCIRCLE_H

#include "CIShape.h"

class CCircle : public CIshape
{
  private:
    float m_fRadius;
    float m_fAreaCircle;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CCIRCLE_H
