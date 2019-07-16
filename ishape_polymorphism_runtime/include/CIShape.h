#ifndef CISHAPE_H
#define CISHAPE_H

#include <iostream>
#include "CTriangle.h"

using namespace std;

class CIShape
{
    public:
        virtual ~CIShape()
        {
            cout<<"Destructor";
        }
        virtual void ReadData() = 0;
        virtual void DrawShape() =0;

    private:
};


#endif // CISHAPE_H
