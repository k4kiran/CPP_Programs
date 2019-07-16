
/**
 * File arrayobject_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the member functions of  class " CEmployee ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */
 #include "operator_overload_complex.h"


CComplex::CComplex( void )
{

    //unimplemented
}

CComplex::CComplex(int nReal, int nImag)
{
    m_nReal = nReal;
    m_nImag = nImag;
}


CComplex CComplex::operator + (CComplex const &OperatorObject)
{
    CComplex TempObject;
    TempObject.m_nReal = m_nReal + OperatorObject.m_nReal;
    TempObject.m_nImag = m_nImag + OperatorObject.m_nImag;
    return TempObject;
}
void  CComplex::DisplayValue()
{
    cout << "Result is: " << m_nReal<<" + "<<m_nImag<<"i\n";
}

void ReadDetails()

{   int nRealPart,nImagPart;
    CComplex CPrint;
    cout <<  "Enter the real part of first object: ";
    cin >> nRealPart;
    cout << "\nEnter the Imaginary Part of first object: ";
    cin >> nImagPart;
    CComplex ComplexAdd1(nRealPart, nImagPart);
    cout << "\nEntered complex number: " << nRealPart <<" + " << nImagPart << "i";

    cout <<  "\nEnter the real part of second object: ";
    cin >> nRealPart;
    cout << "\nEnter the Imaginary Part of second object: ";
    cin >> nImagPart;
    CComplex ComplexAdd2(nRealPart, nImagPart );
    cout << "\nEntered complex number: " << nRealPart <<" + " << nImagPart << "i\n\n";
    //CPrint.FormatPrint(ComplexAdd1,ComplexAdd2);
    CComplex ComplexAddResult = ComplexAdd1 + ComplexAdd2;
    ComplexAddResult.DisplayValue();


}
void CComplex::FormatPrint(CComplex ComplexAdd1,CComplex ComplexAdd2)
{
   // CComplex ComplexAdd1,ComplexAdd2;
    CComplex ComplexAddResult = ComplexAdd1 + ComplexAdd2;
    cout<<setw(5)<<ComplexAdd1.m_nReal<<" + "<<ComplexAdd1.m_nImag<<"i";
    cout<<" +\n";
    cout<<setw(5)<<ComplexAdd2.m_nReal<<" + "<<ComplexAdd2.m_nImag<<"i";
    cout<<"\n----------\n";
    cout<<setw(5)<<ComplexAddResult.m_nReal<<" + "<<ComplexAddResult.m_nImag<<"i\n";
    ComplexAddResult.DisplayValue();

}


