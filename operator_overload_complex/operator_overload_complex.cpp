
/**
 * File operator_overload_complex.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the member functions of  class " CComplex ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

 #include "operator_overload_complex.h"

// -------------------------------------------------------
// Method      : DesignationRead
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read employee designation.
// -------------------------------------------------------

CComplex::CComplex( void )
{

    //unimplemented
}

// -------------------------------------------------------
// Method      : DesignationRead
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read employee designation.
// -------------------------------------------------------

CComplex::CComplex( float fReal, float fImag)
{
    m_fReal = fReal;
    m_fImag = fImag;
}

// -------------------------------------------------------
// Method      : DesignationRead
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read employee designation.
// -------------------------------------------------------

CComplex CComplex::operator + (CComplex const &OperatorObject)
{
    CComplex TempObject;
    TempObject.m_fReal = m_fReal + OperatorObject.m_fReal;
    TempObject.m_fImag = m_fImag + OperatorObject.m_fImag;
    return TempObject;
}

// -------------------------------------------------------
// Method      : DesignationRead
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read employee designation.
// -------------------------------------------------------

void  CComplex::DisplayValue()
{
    cout << "Result is: " << m_fReal<<" + "<<m_fImag<<"i\n";
}

// -------------------------------------------------------
// Method      : DesignationRead
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read employee designation.
// -------------------------------------------------------

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

// -------------------------------------------------------
// Method      : DesignationRead
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read employee designation.
// -------------------------------------------------------

void UserInterface()
{
    cout << "**************ADDITION OF COMPLEX NUMBERS******************\n";
    cout << "This is a software to add two complex numbers";
    cout << "\n---------------------------------------------\n\n";
}
/*
void CComplex::FormatPrint(CComplex *ComplexAdd3,CComplex *ComplexAdd4)
{
    CComplex ComplexAdd1,ComplexAdd2;
    CComplex ComplexAddResult = ComplexAdd1 + ComplexAdd2;
    cout<<setw(5)<<ComplexAdd1.m_fReal<<" + "<<ComplexAdd1.m_fImag<<"i";
    cout<<" +\n";
    cout<<setw(5)<<ComplexAdd2.m_fReal<<" + "<<ComplexAdd2.m_fImag<<"i";
    cout<<"\n----------\n";
    cout<<setw(5)<<ComplexAddResult.m_fReal<<" + "<<ComplexAddResult.m_fImag<<"i\n";
    ComplexAddResult.DisplayValue();

}


*/
