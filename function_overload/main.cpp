
/**
 * File main.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains main function of function overloading.
 *
 * Author   : Kiran Bal.
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */
#include "func_manage.h"

int main()
{
	int nChoice;
    do
    {
		//interface for the user
        cout << "\n\n**************************MENU******************\n";
        cout <<"1.CIRCLE\n2.RECTANGLE\n3.TRIANGLE\nEnter your choice: ";
        cin >> nChoice;
        switch(nChoice)
        {
		case 1:
			CircleArea();
            break;
        case 2:
			RectangleArea();
            break;
        case 3:
			TriangleArea();
            break;
        default:
			cout <<"\n invalid character\n";
        }
    }while(nChoice != 0 );
	return 0;
}