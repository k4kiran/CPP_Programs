
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
#include<string>
#include<string.h>
#include<stdlib.h>



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

void CInterface::Title()
{
    cout << "****************************************************STUDENT DATABASE**************************************************\n\n";
}

// ---------------------------------------------------------------------------
// Method      : UserInterface2
// Parameters  : Nil
// Returns     : void
// Description : Member function of class for user interface.
// ---------------------------------------------------------------------------

void CInterface::Manager()
{
    int nChoiceMainMenu;
    CStudentDetails student;
    ofstream storefile;
    ifstream readfile;
    int nChoiceUserMenu;
    cout << "\n\n\n\n\n" << string(40,' ') << "1.Administrator\n\n";
    cout << string(40,' ') << "2.other user\n\n\n" << string(40,' ') << "Enter your preferred choice from menu (1 or 2):";
    cin >> nChoiceUserMenu;
    int i = 0;
    int onemore;
    switch(nChoiceUserMenu)
    {
    case 1:
        system("CLS");
        this->Title();
        cout << "\n\n\n\n\n";
        cout << string(40,' ') << "1.Enter Details\n\n";
        cout << string(40,' ') << "2.View Details\n\n";
        cout << string(40,' ') << "3.Exit\n\n";
        cout << string(40,' ') << "Please Enter your preferred choice from menu (enter 1,2 or 3): ";
        cin >> nChoiceMainMenu;

        switch( nChoiceMainMenu )
        {
        case 1:
            do
            {
            student.ReadDetails();
            storefile.open("studentdetails.dat",ios::app);
            if(!storefile)
            {
                cout<<"Error in creating file.."<<endl;
                //return 0;
            }
            storefile.write((char*)&student,sizeof(student));

            storefile.close();
            cout << "\n\n\n" << string(40,' ') << "Do  you want to add one more?(1/0)";

            cin>>onemore;
            i++;
            }while(onemore==1);

            break;

        case 2:
            system("CLS");
            this->Title();
            cout << "\n\n\nRegister Number\t\tName\t\tGender\t\tCourse\t\tDate of join\n";
            readfile.open("studentdetails.dat",ios::in);
            while( readfile.read((char *) &student, sizeof(student)))
            {
                student.DisplayDetails();
            }
            //student.DisplayDetails();
            readfile.close();
            break;

        default:
            cout << "Invalid char";

        }
    break;

    case 2:
        int nUserChoice;
        system("CLS");
        cout << "1.View Details\n\n2.View Specific Details\n\n3.Back to main menu\n\n\nEnter your preferred choice (1,2,or3) : ";
        cin >> nUserChoice;
        switch(nUserChoice)
        {
        case 1:
            system("CLS");
            this->Title();
            cout << "\n\n\nRegister Number\t\tName\t\tGender\t\tCourse\t\tDate of join\n";
            readfile.open("studentdetails.dat",ios::in);
            while( readfile.read((char *) &student, sizeof(student)))
            {
                student.DisplayDetails();
            }
            //student.DisplayDetails();
            readfile.close();
            break;

        case 2:
            char nRegistrationNumber[MAXLENGTH];
            system("CLS");
            this->Title();
            cout << "\n\n\n" << string(40, ' ') << "Register Number: ";
            cin >> nRegistrationNumber;

            readfile.open("studentdetails.dat",ios::in);
            while( readfile.read((char *) &student, sizeof(student)))
            {
                if(!(strcmp(student.GetRegistration(), nRegistrationNumber)))
                {
                    student.DisplayDetails();
                }
                //cout << "here" << student.GetRegistration();
                //student.DisplayDetails();
            }
            //student.DisplayDetails();
            readfile.close();
            break;

        default:
            cout << "invalid input";

        }
        break;
    default:
        cout<< "invalid";


   // outfile1.open("testfile.txt,ios::out");
    }
}
