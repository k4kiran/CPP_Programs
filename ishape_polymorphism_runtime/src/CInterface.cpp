
/**
 * File CInterface.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CInterface class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */

#include "CInterface.h"

// ---------------------------------------------------------------------------
// Method      : InterfaceTitle
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to print tiltle.
// ---------------------------------------------------------------------------

void CInterface::InterfaceTitle()
{
  cout << "***************************************************** DRAW SHAPES ****************************************************\n";
}

// ---------------------------------------------------------------------------
// Method      : Manager
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to manage all functions.
// ---------------------------------------------------------------------------

void CInterface::Manager()
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

// -----------------------------------------------------------------------
// Method      : ReadDetails
// Parameters  :
//    <param 1> - <int> - menu choice entered by user.
// Returns     : void
// Description : function to read data from the user .
// -----------------------------------------------------------------------

void CInterface::ReadDetails( /*IN*/ int nChoice )
       {
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
                if( nCount == 0 )
                {
                    cout<<"\n\n\t\t\t\tNo data available,please add sufficiant data ";
                }
                else
                {
                    cout << "\n\t\t------------------------------ Drawing selected shapes ----------------------------\n\n";
                for( int nDrawCount = 0; nDrawCount < nCount; nDrawCount++ )
                {
                    Shapes[nDrawCount]->DrawShape();
                    cout << endl << endl;
                }
                getch();
                }
                getch();
                break;
         default:
                cout << "\nPlease enter valid option from the menu";
         }
}
