/**
 * File CValid.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition CValid class which used for input validation.
 * This file is created for validation purpose.coding standards are not applied.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 25-07-2019
 *
 */

#ifndef VALID_H
#define VALID_H

#define ARRAY_SIZE 20
#define DATE_SIZE 11

#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

class CValid
{
    public:

    static void Password();

    static void IntCheck( char[ARRAY_SIZE], int, int );

    static void IntInput( char[ARRAY_SIZE] );

    static void DeptCheck( char[ARRAY_SIZE] );

    static void DateCheck( char[DATE_SIZE] );

    static void DateInput(char [DATE_SIZE] );

    static void Input( char[ARRAY_SIZE] );

    static void GenderCheck( char[ARRAY_SIZE] );

    static void FloatCheck( char[ARRAY_SIZE], float, float );

    static void FloatInput( char[ARRAY_SIZE] );

};

#endif // VALID_H
