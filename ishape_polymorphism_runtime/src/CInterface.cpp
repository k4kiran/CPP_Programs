
#include "CInterface.h"
#include "CCircle.h"
#include "CRectangle.h"
#include "CTriangle.h"
#include "CIShape.h"

void CInterface::UserInterface()
{
        int nShapeChoice;
        cout << "\n0.Exit";
        cout << "\n1.Triangle";
        cout << "\n2.Circle";
        cout << "\n3.Rectangle";
        cout << "\n4.Draw selected shapes";
        cout << "\nPlease choose an option by providing an input as number(0,1,2,3 or 4):  ";
        cin >> nShapeChoice;
        ReadDetails( nShapeChoice );
}

void CInterface::ReadDetails( /*IN*/ int nChoice )
       {
           int nCount = 0;
          CIshape *Data[LENGTH];
          switch( nChoice )
         {
           case 0:
                cout << "\nExit";
                exit(0);
                break;

          case 1:
                cout << "\nSelected shape is Triangle";
                Data[nCount] = new CTriangle;
                Data[nCount]->ReadData();
                nCount++;
                break;

         case 2:
                cout << "\nSelected shape is Circle";
                Data[nCount] = new CCircle;
                Data[nCount]->ReadData();
                nCount++;
                break;

         case 3:
                cout << "\nSelected shape is Rectangle";
                Data[nCount] = new CRectangle;
                Data[nCount]->ReadData();
                nCount++;
                break;

         case 4:
                cout << "\nDraw selected shapes";
                for( int nInCount = 0; nInCount < nCount; nInCount++ )
                {
                    Data[nInCount]->DrawShape();
                    cout << endl << endl;
                }
                break;
         }
}
