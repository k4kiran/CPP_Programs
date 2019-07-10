
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
#include "method_overload_volume_manage.h"



int main()
{
	int nChoice;
    do
    {
		//interface for the user
        cout << "**************************VOLUME OF SHAPES******************\n\n";
        cout <<"1.CUBE\n2.PYRAMID\n3.RECTANGULAR PRISM\n\nEnter your choice: ";
        cin >> nChoice;
        switch(nChoice)
        {
		case 1:
			CubeVolume();
            break;
        case 2:
			PrismVolume();
            break;
        case 3:
			PyramidVolume();
            break;
        default:
			cout <<"\n invalid character\n";
        }
    }while(nChoice != 0 );
	return 0;
}
