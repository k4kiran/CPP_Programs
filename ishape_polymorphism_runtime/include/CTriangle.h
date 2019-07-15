#ifndef CTRIANGLE_H
#define CTRIANGLE_H


class CTriangle
{
    public:
        CTriangle();
        virtual ~CTriangle();

    protected:

    private:
        float m_fBase;
        float m_fHeight;
        float m_fArea;
};

#endif // CTRIANGLE_H
