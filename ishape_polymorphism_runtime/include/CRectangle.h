#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include "CInterface.h"
class CRectangle : public CIShape
{
  private:
    float m_fLength;
    float m_fBreadth;
    float m_fRectangleArea;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CRECTANGLE_H
