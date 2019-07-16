


#include "CInterface.h"



void CInterface::UserInterface()
{

    int nChoice;
    int nRepeat;
    do
    {
		//interface for the user
        cout << "\n\n********************************************\n";
        cout <<"0.Exit\n1.Triangle\n2.Circle\n3.Rectangle\n4.Draw Selected Shapes\nEnter your choice: ";
        cin >> nChoice;

        this ->ReadDetails( nChoice );
        cout << "Do you want to Continue?(1/0)";
        cin >> nRepeat;
    }while(nRepeat != 0 );

}

void CInterface::ReadDetails( int nChoiceMenu )
{

        switch(nChoiceMenu)
        {
		case 1:


            CTriangle *ptempptr = new CTriangle();
            pShapePtr = dynamic_cast<CIShape *>(ptempptr);

		    pShapePtr->ReadData();
		    pShapePtr->DrawShape();

            break;

        case 2:
            cout << "Selected shape is Circle";
            //VolumePyramid();
            break;

        case 3:
            cout << "Selected shape is Rectangle";
            //VolumePrism();
            break;
        default:
			cout <<"\n invalid character\n";
        }
}

