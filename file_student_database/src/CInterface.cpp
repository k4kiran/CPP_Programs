
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
#include<fstream>



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
    int nChoiceMainMenu;
    CStudentDetails student[MAXSTUDENT];
    fstream outfile1;
    int nCh;
    cout << "1.Administrator\n2.other user\nenter your choice:";
    cin >> nCh;
    int i = 0;
    int onemore;
    switch(nCh)
    {
    case 1:
        cout << "\n1.Enter Details\n";
        cout << "2.View Details\n";
        cout << "3.Exit\n";
        cout << "Please Enter your preferred choice from menu (enter 1,2 or 3): ";
        cout << "\n\n";
        cin >> nChoiceMainMenu;

        switch( nChoiceMainMenu )
        {
        case 1:
            do
            {
            student[i].ReadDetails();
            outfile1.open("testfile.dat",ios::app);
            if(!outfile1)
            {
                cout<<"Error in creating file.."<<endl;
                //return 0;
            }
            outfile1.write((char*)&student[i],sizeof(student[i]));

            outfile1.close();
            cout << "Do  you want to add one more?(1/0)";

            cin>>onemore;
            i++;
            }while(onemore==1);

            break;

        case 2:
            outfile1.open("testfile.dat",ios::in);
            outfile1.read((char *) &student[1], sizeof(student[1]));
            student[1].DisplayDetails();
            break;

        default:
            cout << "Invalid char";

        }
    break;

//    case2:
    default:
        cout<< "invalid";


   // outfile1.open("testfile.txt,ios::out");
    }
}
