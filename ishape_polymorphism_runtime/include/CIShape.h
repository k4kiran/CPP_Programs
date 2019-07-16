#ifndef CISHAPE_H
#define CISHAPE_H

#include <iostream>
#include <stdlib.h>
#define LENGTH 20
#include "CTriangle.h"

using namespace std;

class CIshape
{
    public:
      virtual void ReadData()=0;
      virtual void DrawShape()=0;
};


#endif // CISHAPE_H
