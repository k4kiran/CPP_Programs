/**
 * File main.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of main function.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 18-07-2019
 *
 */
#include "CInterface.h"


int main()
{
   CInterface ManageClasses;
   ManageClasses.InterfaceTitle();
   while(1)
   {
     ManageClasses.Manager();
   }
   return 0;
}
