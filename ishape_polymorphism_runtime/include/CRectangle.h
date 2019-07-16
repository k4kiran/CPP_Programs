#ifndef CRECTANGLE_H
#define CRECTANGLE_H


class CRectangle : public CIshape
{
  private:
    float m_fLength;
    float m_fBreadth;
    float m_fAreaRectangle;
  public:
    void ReadData();
    void DrawShape();
};
#endif // CRECTANGLE_H
