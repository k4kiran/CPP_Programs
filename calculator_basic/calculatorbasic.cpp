/**
 * File employeedetails_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the main function of the employeedetails program.
 *cpp program for a simple calculator(add and subtract) using switch statement
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 04-07-2019
 *
 */

#include "calcmanage.h"

using namespace std;

int main()
{
    int nFirstNumber;
    int nSecondNumber;
    int nChoice;
    int nCh;
    cout<<"**************************CALCULATOR*****************************\n\n";
    cout<<"Enter two numbers";
    cin>>nFirstNumber>>nSecondNumber;
    do
    {
        cout<<"\n\n1.ADDITION\n2.SUBTRACTION\nEnter your choice:\t";
        cin>>nChoice;
        switch(nChoice)
        {
        case 1:
            cout<<"\nRESULT: "<<nFirstNumber + nSecondNumber;
        break;

        case 2:
            cout<<"\nenter choice\n1.first-second\n2.second-first\n";
            cin>>nCh;
            if( nCh == 1 )
            {
                cout<<"\n RESULT: "<<nFirstNumber - nSecondNumber;
            }

            else if( nCh == 2 )
            {
                cout<<"\nRESULT: "<<nSecondNumber - nFirstNumber;
            }

            else
            {
                cout<<"\nInvalid input";
            }
        break;
        default:cout<<"\ninvalid character";
        }
    }while(nChoice!=0);
}
