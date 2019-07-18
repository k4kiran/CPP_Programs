#ifndef CCIRCLE_H
#define CCIRCLE_H

//#include "CInterface.h"
#include "CIShape.h"

class CCircle : public CIShape
//class CCircle
{
  private:
    float m_fRadius;
    float m_fCircleArea;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CCIRCLE_H
