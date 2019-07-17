#ifndef CISHAPE_H
#define CISHAPE_H

#include <iostream>
#include <stdlib.h>
#define LENGTH 20

using namespace std;

class CIShape
{
    public:
      virtual void ReadData()=0;
      virtual void DrawShape()=0;
};


#endif // CISHAPE_H
