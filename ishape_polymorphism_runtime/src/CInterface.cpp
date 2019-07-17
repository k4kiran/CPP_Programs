
#include "CInterface.h"

void CInterface::UserInterface()
{
        int nShapeChoice;
        cout << "\n0.Exit";
        cout << "\n1.Triangle";
        cout << "\n2.Circle";
        cout << "\n3.Rectangle";
        cout << "\n4.Draw selected shapes";
        cout << "\nEnter your choice from the above menu :  ";
        cin >> nShapeChoice;
        ReadDetails( nShapeChoice );
}

void CInterface::ReadDetails( /*IN*/ int nChoice )
       {
            int nCount = 0;
          CIShape *Shapes[LENGTH];
          switch( nChoice )
         {
           case 0:
                cout << "\nExit";
                exit(0);
                break;

          case 1:
                cout << "\nSelected shape is Triangle";
                Shapes[nCount] = new CTriangle;
                Shapes[nCount]->ReadData();
                nCount++;
                break;

         case 2:
                cout << "\nSelected shape is Circle";
                Shapes[nCount] = new CCircle;
                Shapes[nCount]->ReadData();
                nCount++;
                break;

         case 3:
                cout << "\nSelected shape is Rectangle";
                Shapes[nCount] = new CRectangle;
                Shapes[nCount]->ReadData();
                nCount++;
                break;

         case 4:
                cout << "\nDraw selected shapes";
                for( int nDrawCount = 0; nDrawCount < nCount; nDrawCount++ )
                {
                    Shapes[nDrawCount]->DrawShape();
                    cout << endl << endl;
                }
                break;
         }
}
