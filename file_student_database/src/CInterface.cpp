
/**
 * File CInterface.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of functions in the class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */


#include "CInterface.h"


/*
CInterface::CInterface()
{
    //ctor
}

CInterface::~CInterface()
{
    //dtor
}
*/


// ---------------------------------------------------------------------------
// Method      : UserInterface
// Parameters  : Nil
// Returns     : void
// Description : Member function of class for user interface.
// ---------------------------------------------------------------------------

void CInterface::UserInterface()
{
    cout << "*********************STUDENT DATABASE*************************\n\n";
}

// ---------------------------------------------------------------------------
// Method      : UserInterface2
// Parameters  : Nil
// Returns     : void
// Description : Member function of class for user interface.
// ---------------------------------------------------------------------------

void CInterface::UserInterface2()
{
    cout << "\n1.Enter Details\n";
    cout << "2.View Details\n";
    cout << "3.Exit\n";
    cout << "Please Enter your preferred choice from menu (enter 1,2 or 3): ";
    cout << "\n\n";
}

