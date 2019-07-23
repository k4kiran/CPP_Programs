#ifndef CINTERFACE_H
#define CINTERFACE_H

#include <stdlib.h>
#include <conio.h>
#include "CCircle.h"
#include "CRectangle.h"
#include "CTriangle.h"
#include "CIShape.h"


class CInterface
{
private:
     int nCount = 0;
     CIShape *Shapes[LENGTH];
public:
    void UserInterface();
    void InterfaceTitle();
    void ReadDetails( int );
};

#endif // CINTERFACE_H
