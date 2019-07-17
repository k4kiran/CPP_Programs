#ifndef CCIRCLE_H
#define CCIRCLE_H

#include "CInterface.h"

class CCircle : public CIShape
{
  private:
    float m_fRadius;
    float m_fCircleArea;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CCIRCLE_H
