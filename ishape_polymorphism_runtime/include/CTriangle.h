#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CIShape.h"
#include "CInterface.h"


class CTriangle:public CIShape
{
     public:
        CTriangle();

        virtual ~CTriangle()
        {
            //no body
        void ReadData();
        void DrawShape();

    private:
        float m_fBase;
        float m_fHeight;
        float m_fArea;
};


#endif // CTRIANGLE_H
