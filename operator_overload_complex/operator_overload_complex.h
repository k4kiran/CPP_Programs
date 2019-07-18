
/**
 * File operator_overload_complex.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of class " CComplex ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 10-07-2019
 *
 */

#ifndef OPERATOR_OVERLOAD_COMPLEX_H_INCLUDED
#define OPERATOR_OVERLOAD_COMPLEX_H_INCLUDED

#include <iostream>
#include <iomanip>
using namespace std;

/**
* Class CComplex
* simple class to Overload the '+' operator for complex number addition
* Author :Kiran Bal
* Version :1.0.0
* Date :10-07-2019
*
*/

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
};
void AddComplex();
void UserInterface();

#endif // OPERATOR_OVERLOAD_COMPLEX_H_INCLUDED
