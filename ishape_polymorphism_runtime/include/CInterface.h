#ifndef CINTERFACE_H
#define CINTERFACE_H

#include "CIShape.h"

class CInterface
{
    public:
       void UserInterface();
       void ReadDetails( int );
    protected:

    private:
        CIShape *pShapePtr;
};

#endif // CINTERFACE_H
