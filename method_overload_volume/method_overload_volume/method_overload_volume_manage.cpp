
/**
 * File method_overload_volume_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains implementation of method overloading for Volume of shapes.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#include "method_overload_volume_manage.h"

// -------------------------------------------------------
// Method      : Volume
// Parameters  :
//	<param 1> - <float> - length of the Prism.
//  <param 2> - <float> - Breadth of the Prism.
//  <param 3> - <float> - Height of the Prism.
// Returns     : <float> - Volume calculated by the function.
// Description : Returns the Volume of Prism.
// -------------------------------------------------------

float VolumeOfShapes::Volume( /*IN*/ float fLength, /*IN*/ float fBreadth, /*IN*/ float fHeight )
{
    float fVolumePrism;
    fVolumePrism = fLength * fBreadth * fHeight;
    return fVolumePrism;
}

// -------------------------------------------------------
// Method      : Volume
// Parameters  :
//	<param 1> - <float> - side of the Cube.
// Returns     : <float> - Volume calculated by the function.
// Description : Returns the Volume of Cube.
// -------------------------------------------------------

float VolumeOfShapes::Volume( /*IN*/ float fLength )
{
    float fVolumeCube;
    fVolumeCube = fLength * fLength * fLength;
    return fVolumeCube;
}

// -------------------------------------------------------
// Method      : Volume
// Parameters  :
//	<param 1> - <float> - length of the Pyramid.
//  <param 2> - <float> - breadth of the Pyramid.
//  <param 3> - <float> - Height of the Pyramid.
// Returns     : <float> - Volume calculated by the function.
// Description : Returns the Volume of Pyramid.
// -------------------------------------------------------

float VolumeOfShapes::Volume( /*IN*/ float fLength, /*IN*/ float fHeight )
{
    float fVolumePyramid;
    fVolumePyramid = (1/3) * fLength * fHeight;
    return fVolumePyramid;
}

// -------------------------------------------------------
// Method      : CubeVolume
// Parameters  : Nil
// Returns     : void
// Description : Displays the Volume of Cube.
// -------------------------------------------------------

void VolumeOfShapes::CubeVolume()
{
    cout << "Enter Length of cube: ";
    cin  >> nSide1;

	//overload function
    fResult = Volume( nSide1 );
    cout << "Volume of cube is : " << fResult << "\n\n";
}

// -------------------------------------------------------
// Method      : PrismVolume
// Parameters  : Nil
// Returns     : void
// Description : Displays the Volume of Prism.
// -------------------------------------------------------

void VolumeOfShapes::PrismVolume()
{
    cout << "\nEnter length of prism: ";
    cin >> fLengthPrism;
    cout << "\nEnter breadth of prism: ";
    cin >> fBreadthPrism;
    cout << "\n Enter Height of Prism: ";
    cin >> fHeightPrism;

	//overload function
    fResult = Volume(fLengthPrism, fBreadthPrism, fHeightPrism);
    cout << "Volume of prism is:" << fResult << "\n\n";
}

// -------------------------------------------------------
// Method      : PyramidVolume
// Parameters  : Nil
// Returns     : void
// Description : Displays the Volume of Pyramid.
// -------------------------------------------------------

void VolumeOfShapes::PyramidVolume()
{
    cout << "\nEnter base length of Pyramid: ";
    cin >> fBaseLength;
    cout << "\nEnter the height of pyramid: ";
    cin >> fHeightPyramid;

	//overload function
    fResult = Volume(fBaseLength, fHeightPyramid);
    cout << "Volume of pyramid is: " << fResult << "\n\n";
}
