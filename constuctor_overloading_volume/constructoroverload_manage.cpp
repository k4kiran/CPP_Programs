
/**
 * File func_manage.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of functions.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#include "constructoroverload_manage.h"

// -------------------------------------------------------
// Method      : Display
// Parameters  : Nil
// Returns     : void
// Description : Member function to create new book entry
// -------------------------------------------------------

void COverloadVolume::Display()
{
    cout << "Volume  is " << m_fVolume <<" cm^3";
}

// -------------------------------------------------------
// Method      : COverloadVolume
// Parameters  : Nil
// Returns     : void
// Description : Consrtuctor
// -------------------------------------------------------

COverloadVolume::COverloadVolume( /*IN*/ float fSide1 )
{
    m_fLengthCube = fSide1;
    m_fVolume = fSide1 * fSide1 * fSide1;
}

// -------------------------------------------------------
// Method      : CreateBook
// Parameters  : Nil
// Returns     : void
// Description : Member function to create new book entry
// -------------------------------------------------------
COverloadVolume::COverloadVolume( /*IN*/ float fSide1, /*IN*/ float fSide2)
{
    m_fLengthPyramid = fSide1;
    m_fBreadthPyramid= fSide2;
    m_fVolume = (fSide1 * fSide2)/3;
}
// -------------------------------------------------------
// Method      : CreateBook
// Parameters  : Nil
// Returns     : void
// Description : Member function to create new book entry
// -------------------------------------------------------

COverloadVolume::COverloadVolume( /*IN*/ float fSide1, /*IN*/ float fSide2, /*IN*/ float fSide3 )
{
    m_fLengthPrism = fSide1;
    m_fBreadthPrism = fSide2;
    m_fHeightPrism = fSide3;
    m_fVolume = fSide1 * fSide2 * fSide3;
}

// -------------------------------------------------------
// Method      : CreateBook
// Parameters  : Nil
// Returns     : void
// Description : Member function to create new book entry
// -------------------------------------------------------

void VolumeCube()
{
    float fLengthCube;
    cout << "Enter the length of cube (in cm)";
    cin >> fLengthCube;
    COverloadVolume CubeVolume(fLengthCube);
    CubeVolume.Display();
}
// -------------------------------------------------------
// Method      : CreateBook
// Parameters  : Nil
// Returns     : void
// Description : Member function to create new book entry
// -------------------------------------------------------
void VolumePyramid()
{
    float fLengthPyramid;
    float fBreadthPyramid;
    cout << "Enter the length of pyramid (in cm)\n";
    cin >> fLengthPyramid;
    cout << "Enter the Breadth of Pyramid (in cm)\n";
    cin >> fBreadthPyramid;
    COverloadVolume PyramidVolume(fLengthPyramid, fBreadthPyramid);
    PyramidVolume.Display();
}

// -------------------------------------------------------
// Method      : CreateBook
// Parameters  : Nil
// Returns     : void
// Description : Member function to create new book entry
// -------------------------------------------------------

void VolumePrism()
{

    float fLengthPrism;
    float fBreadthPrism;
    float fHeightPrism;
    cout << "Enter the length of prism (in cm)\n";
    cin >> fLengthPrism;
    cout << "Enter the Breadth of Prism (in cm)\n";
    cin >> fBreadthPrism;
    cout << "Enter the Height of Prism (in cm)\n";
    cin >> fHeightPrism;
    COverloadVolume PrismVolume(fLengthPrism, fBreadthPrism, fHeightPrism);
    PrismVolume.Display();
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
