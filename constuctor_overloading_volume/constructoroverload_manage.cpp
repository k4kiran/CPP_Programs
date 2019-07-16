
#include "constructoroverload_manage.h"
void COverloadVolume::display()
{
    cout << "Volume  is " << m_fVolume;
}


COverloadVolume::COverloadVolume( float fSide1 )
{
    m_fLengthCube = fSide1;
    m_fVolume = fSide1 * fSide1 * fSide1;

}


COverloadVolume::COverloadVolume( float fSide1, float fSide2)
{
    m_fLengthPyramid = fSide1;
    m_fBreadthPyramid= fSide2;
    m_fVolume = (fSide1 * fSide2)/3;
}

COverloadVolume::COverloadVolume( float fSide1, float fSide2, float fSide3 )
{
    m_fLengthPrism = fSide1;
    m_fBreadthPrism = fSide2;
    m_fHeightPrism = fSide3;
    m_fVolume = fSide1 * fSide2 * fSide3;
}


void VolumeCube()
{

    float fLengthCube;
    cout << "Enter the length of cube";
    cin >> fLengthCube;
    COverloadVolume CubeVolume(fLengthCube);
    CubeVolume.display();
}

void VolumePyramid()
{
    float fLengthPyramid;
    float fBreadthPyramid;
    cout << "Enter the length of pyramid\n";
    cin >> fLengthPyramid;
    cout << "Enter the Breadth of Pyramid\n";
    cin >> fBreadthPyramid;
    COverloadVolume PyramidVolume(fLengthPyramid, fBreadthPyramid);
    PyramidVolume.display();

}

void VolumePrism()
{

    float fLengthPrism;
    float fBreadthPrism;
    float fHeightPrism;
    cout << "Enter the length of prism\n";
    cin >> fLengthPrism;
    cout << "Enter the Breadth of Prism\n";
    cin >> fBreadthPrism;
    cout << "Enter the Height of Prism\n";
    cin >> fHeightPrism;
    COverloadVolume PrismVolume(fLengthPrism, fBreadthPrism, fHeightPrism);
    PrismVolume.display();
}

void UserInterface()

{
    int nChoice;
    do
    {
		//interface for the user
        cout << "\n\n**************************Volume Of Shapes******************\n";
        cout <<"1.Cube\n2.Pyramid\n3.Prism\nEnter your choice: ";
        cin >> nChoice;
        switch(nChoice)
        {
		case 1:
            VolumeCube();
            break;

        case 2:
            VolumePyramid();
            break;

        case 3:
            VolumePrism();
            break;
        default:
			cout <<"\n invalid character\n";
        }
    }while(nChoice != 0 );

}
