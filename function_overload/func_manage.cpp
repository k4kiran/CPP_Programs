
/**
 * File func_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains implementation of function overloading for area of shapes.
 * calculation is only for testing may not be real equations.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#include "func_manage.h"

float fResult;
int nChoice;
int nRadius;
int nLengthInput;
int nBreadthInput;
int nHeightInput;

// -------------------------------------------------------
// Method      : area
// Parameters  :
//	<param 1> - <int iLength> - length of the rectangle.
//  <param 2> - <int iBreadth> - Breadth of the rectangle.
// Returns     : <int nAreaRectangle> - Area calculated by the function.
// Description : Returns the Area of Rectangle.
// -------------------------------------------------------

int Area( /*IN*/ int nLength, /*IN*/ int nBreadth)
{
    int nAreaRectangle;
    nAreaRectangle = nLength * nBreadth;
    return nAreaRectangle;
}

// -------------------------------------------------------
// Method      : Area
// Parameters  :
//	<param 1> - <int fRadius> - Radius of the circle.
// Returns     : <int nAreaCircle> - Area calculated by the function.
// Description : Returns the Area of Circle.
// -------------------------------------------------------

float Area( /*IN*/ int fRadius )
{
    float fAreaCircle;
    fAreaCircle = 3.14 * fRadius * fRadius;
    return fAreaCircle;
}

// -------------------------------------------------------
// Method      : Area
// Parameters  :
//	<param 1> - <int iLength> - length of the rectangle.
//  <param 2> - <int iBreadth> - Breadth of the rectangle.
//  <param 3> - <int iHeight> - Height of the Triangle.
// Returns     : <int nAreaTriangle> - Area calculated by the function.
// Description : Returns the Area of Triangle.
// -------------------------------------------------------

float Area( /*IN*/ int nLength, /*IN*/ int nBreadth, /*IN*/ int nHeight )
{
    float fAreaTriangle;
    fAreaTriangle = nLength * nBreadth * nHeight;
    return fAreaTriangle;
}

// -------------------------------------------------------
// Method      : CircleArea
// Parameters  : Nil
// Returns     : void
// Description : Displays the Area of Circle.
// -------------------------------------------------------

void CircleArea()
{
    cout << "Enter radius: ";
    cin  >> nRadius;
	//overload function
    fResult = Area( nRadius );
    cout << "area is : " << fResult;
}

// -------------------------------------------------------
// Method      : RectangleArea
// Parameters  : Nil
// Returns     : void
// Description : Displays the Area of Rectangle.
// -------------------------------------------------------

void RectangleArea()
{
    cout << "\nEnter length and breadth: ";
    cin >> nLengthInput >> nBreadthInput;

	//overload function
    fResult = Area(nLengthInput, nBreadthInput);
    cout << "area is:" << fResult;
}

// -------------------------------------------------------
// Method      : TriangleArea
// Parameters  : Nil
// Returns     : void
// Description : Displays the Area of Triangle.
// -------------------------------------------------------

void TriangleArea()
{
    cout << "\nEnter length and breadth and height: ";
    cin >> nLengthInput >> nBreadthInput >> nHeightInput;

	//overload function
    fResult = Area(nLengthInput, nBreadthInput, nHeightInput);
    cout << "area is: " << fResult;
}