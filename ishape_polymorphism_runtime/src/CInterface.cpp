
#include "CInterface.h"

void CInterface::InterfaceTitle()
{
  cout << "***************************************************** DRAW SHAPES ****************************************************\n";
}
void CInterface::UserInterface()
{
        int nShapeChoice;
        //system("CLS");
        cout << "\n0.Exit";
        cout << "\n1.Triangle";
        cout << "\n2.Circle";
        cout << "\n3.Rectangle";
        cout << "\n4.Draw selected shapes";
        cout << "\nEnter your choice from the above menu (0,1,2,3 or 4):  ";
        cin >> nShapeChoice;
        this->ReadDetails( nShapeChoice );
}

void CInterface::ReadDetails( /*IN*/ int nChoice )
       {
//          int nCount = 0;
//          CIShape *Shapes[LENGTH];

          switch( nChoice )
         {
           case 0:
                cout << "\nExiting the program\n\n\n";
                exit(0);
                break;

          case 1:
                system("CLS");
                this->InterfaceTitle();
                cout << "\n\n\t\t\t\Selected shape is Triangle";
                cout << "\n\t\t\t---------------------------";
                Shapes[nCount] = new CTriangle;
                Shapes[nCount]->ReadData();
                nCount++;
                break;

         case 2:
                system("CLS");
                this->InterfaceTitle();
                cout << "\n\n\t\t\t\Selected shape is Circle";
                cout << "\n\t\t\t---------------------------";
                Shapes[nCount] = new CCircle;
                Shapes[nCount]->ReadData();
                nCount++;
                break;

         case 3:
                system("CLS");
                this->InterfaceTitle();
                cout << "\n\n\t\t\t\Selected shape is Rectangle";
                cout << "\n\t\t\t---------------------------";
                Shapes[nCount] = new CRectangle;
                Shapes[nCount]->ReadData();
                nCount++;
                break;

         case 4:
                system("CLS");
                this->InterfaceTitle();
                cout << "\n\t\t------------------------------ Drawing selected shapes ----------------------------\n\n";
                for( int nDrawCount = 0; nDrawCount < nCount; nDrawCount++ )
                {
                    Shapes[nDrawCount]->DrawShape();
                    cout << endl << endl;
                }
                getch();
                system("CLS");
                this->InterfaceTitle();
                break;
         default:
                cout << "\nPlease enter valid option from the menu";
         }

}
