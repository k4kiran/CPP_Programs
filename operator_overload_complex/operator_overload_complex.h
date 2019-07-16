
/**
 * File ararayobject_manage.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of class " CEmployee ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#ifndef OPERATOR_OVERLOAD_COMPLEX_H_INCLUDED
#define OPERATOR_OVERLOAD_COMPLEX_H_INCLUDED

#include <iostream>
#include <iomanip>
using namespace std;


class CComplex
{
private:
    float m_fReal;
    float m_fImag;

public:

    CComplex(const CComplex &);
    CComplex(void);
    CComplex(float, float);
    CComplex operator + (CComplex const & );
    void DisplayValue();
    void FormatPrint(CComplex, CComplex);

};

void ReadDetails();



#endif // OPERATOR_OVERLOAD_COMPLEX_H_INCLUDED
