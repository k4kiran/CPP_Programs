#include <iostream>
using namespace std;
void UserInterface()
{

    int nChoice;
    do
    {
		//interface for the user
        cout << "\n\n********************************************\n";
        cout <<"0.Exit\n1.Triangle\n2.Circle\n3.Rectangle\n4.Draw Selected Shapes\nEnter your choice: ";
        cin >> nChoice;
        switch(nChoice)
        {
		case 1:
		    float fBase;
		    float fHeight;
		    cout << "Selected shape is Triangle";
		    cout << "Please enter the base of triangle: ";
		    cin >> fBase;
		    cout << "Please enter the height of triangle: ";
		    cin >> fHeight;

            //VolumeCube();
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
    }while(nChoice != 0 );


}
