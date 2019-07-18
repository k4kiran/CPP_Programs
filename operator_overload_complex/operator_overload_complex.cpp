
/**
 * File operator_overload_complex.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the member functions of  class " CComplex ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 10-07-2019
 *
 */

 #include "operator_overload_complex.h"

// -------------------------------------------------------
// Method      : Constructor
// Parameters  : Nil
// Returns     : void
// Description : No argument constructor.
// -------------------------------------------------------

CComplex::CComplex( void )
{

    //unimplemented
}

// -----------------------------------------------------------------------
// Method      : Constructor
// Parameters  :
//    <param 1> - <float> - real part of complex number
//    <param 2> - <float> - imaginary part of complex number
// Returns     : void
// Description : constructor to initialize real and imaginary parts value
// -----------------------------------------------------------------------

CComplex::CComplex( float fReal, float fImag)
{
    m_fReal = fReal;
    m_fImag = fImag;
}

// -------------------------------------------------------
// Method      : operator
// Parameters  :
//    <param 1> - <CComplex> - object of ccomplex class.
// Returns     : void
// Description : Function to overload operator.
// -------------------------------------------------------

CComplex CComplex::operator + (CComplex const &OperatorObject)
{
    CComplex TempObject;
    TempObject.m_fReal = m_fReal + OperatorObject.m_fReal;
    TempObject.m_fImag = m_fImag + OperatorObject.m_fImag;
    return TempObject;
}

// ---------------------------------------------------------------------------
// Method      : DisplayValue
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Display real and imaginary parts.
// ---------------------------------------------------------------------------

void  CComplex::DisplayValue()
{
    cout << "Result is: " << m_fReal<<" + "<<m_fImag<<"i\n";
}

// ------------------------------------------------------------------
// Method      : AddComplex
// Parameters  : Nil
// Returns     : void
// Description : Function to add complex numbers and display result.
// ------------------------------------------------------------------

void AddComplex()
{
    float fRealPart,fImagPart;
    CComplex CPrint;
    cout <<  "Enter the real part of first object: ";
    cin >> fRealPart;
    cout << "\nEnter the Imaginary Part of first object: ";
    cin >> fImagPart;
    CComplex ComplexAdd1(fRealPart, fImagPart);
    cout << "Entered complex number: " << fRealPart <<" + " << fImagPart << "i";
    cout <<  "\n\nEnter the real part of second object: ";
    cin >> fRealPart;
    cout << "\nEnter the Imaginary Part of second object: ";
    cin >> fImagPart;
    CComplex ComplexAdd2(fRealPart, fImagPart );
    cout << "Entered complex number: " << fRealPart <<" + " << fImagPart << "i\n\n";
    CComplex ComplexAddResult = ComplexAdd1 + ComplexAdd2;
    ComplexAddResult.DisplayValue();
}

// --------------------------------------------------------
// Method      : UserInterface
// Parameters  : Nil
// Returns     : void
// Description : Function to create interface for the user.
// --------------------------------------------------------

void UserInterface()
{
    cout << "**************ADDITION OF COMPLEX NUMBERS******************\n";
    cout << "This is a software to add two complex numbers";
    cout << "\n---------------------------------------------\n\n";
}

