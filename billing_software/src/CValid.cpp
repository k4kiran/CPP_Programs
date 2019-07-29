
/**
 * File CValid.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CValid class which used for input validation.
 * This file is created for validation purpose.coding standards are not applied.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 25-07-2019
 *
 */

#include "CValid.h"

void CValid::Password()
{
    system( "CLS" );
    //Header();
    string pass ="";
    char ch;
    char user[ARRAY_SIZE];

    cout << "\n\n\tEnter User id: ";
    CValid::Input( user );
    cout << "\n\n\tEnter password: ";
    ch = _getch();
    while(ch != 13)//character 13 is enter
    {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(pass == "admin" && (0 == strcmp(user,"user")))
    {
        cout << "\n\n\tAccess granted\n\n\t ";
        system( "PAUSE" );
    }
    else
    {
        cout << "\nAccess denied.\n";
        system( "PAUSE" );
        Password();
    }
}

void CValid::IntCheck(char szAdmn[ARRAY_SIZE], int minimum, int maximum)
{
    int nAdmnChk;
    char szAdmnChk[ARRAY_SIZE];
    IntInput( szAdmn );
    nAdmnChk = atoi(szAdmn);
    strcpy(szAdmnChk,to_string(nAdmnChk).c_str());
    if(strcmp( szAdmn, szAdmnChk) !=0 )
    {
        cout << "\n\n" << string(40, ' ') << "Invalid entry!\n\n\tEnter again: ";
        IntCheck( szAdmn, minimum, maximum );
    }
    else
    {
        if( nAdmnChk < minimum || nAdmnChk > maximum )
        {
            cout << "\n\n" << string(40, ' ') << "Invalid number! Number must be in range ("<< minimum << " - " << maximum <<")\n\n" << string(40, ' ') << "Enter again: ";
            IntCheck( szAdmn, minimum, maximum);
        }
    }
}



void CValid::IntInput(char nInp[ARRAY_SIZE])
{
    cin.getline(nInp, ARRAY_SIZE);
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "\n" << string(40, ' ') << "Invalid input! Try again: ";
        cin.getline(nInp, ARRAY_SIZE);
    }
    while( 0 == strlen(nInp))
    {
        cout << "\n" << string(40, ' ') << "Invalid input! Try again: ";
        cin.getline(nInp, ARRAY_SIZE);
    }

}



void CValid::DeptCheck(char szCourse[ARRAY_SIZE])
{
    char szCourseChoice;

    cout << "\n\t\t1.Peon\n\n\t\t2.Driver";
    cout << "\n\n\t\t3.Office\n\n\t\t4.Technician";
    cout << "\n\n\t\t5.Maintenance";
    cout << "\n\n\tEnter designation: ";
    szCourseChoice = getche();
    cout << endl;

    while( szCourseChoice != '1' && szCourseChoice != '2'  && szCourseChoice != '3'  && szCourseChoice != '4'  && szCourseChoice != '5' )
    {
        cout << "\n\n\tInvalid course input\n\n\tEnter again: ";
        szCourseChoice = getche();
        cout << endl;
    }

    if( '1' == szCourseChoice )
    {
        strcpy( szCourse , "Peon");
    }
    else if ( '2' == szCourseChoice )
    {
        strcpy( szCourse , "Driver");
    }
    else if( '3' == szCourseChoice )
    {
        strcpy( szCourse , "Office");
    }
    else if( '4' == szCourseChoice )
    {
        strcpy( szCourse , "Technician");
    }
    else if( '5' == szCourseChoice )
    {
        strcpy( szCourse , "Maintenance");
    }

}



void CValid::DateCheck(char szJoinDate[DATE_SIZE])
{
    string day = "" ;
    string month = "";
    string year = "";

    int nIterator;
    int nDay;
    int nMonth;
    int nYear;
    int nDateFlag;

    nDateFlag = 0;

    do
    {

        //cout << endl << "\tEnter join date(DD/MM/YYYY): ";
        DateInput( szJoinDate );

        for( nIterator = 0; nIterator < 10; nIterator++ )
        {
            if(nIterator < 2)
            {
                day = day + szJoinDate[nIterator];
            }
            else if( nIterator > 2 && nIterator < 5 )
            {
                month += szJoinDate[nIterator];
            }
            else if(nIterator > 5 && nIterator < 10 )
            {
                year += szJoinDate[nIterator];
            }
        }

        nDay = atoi(day.c_str());
        nMonth = atoi(month.c_str());
        nYear = atoi(year.c_str());

        if( nDay < 1 || nDay > 31 || nMonth < 1 || nMonth > 12 || nYear < 1950 || nYear > 2019 )
        {
            cout << "\n" << string(40, ' ') << "Invalid Date input!" << endl;
            day = "";
            month = "";
            year = "";
            nDateFlag = 0;
        }
        else
        {
            nDateFlag = 1;
        }

    }while( nDateFlag == 0);
}



void CValid::DateInput( char szJoinDate[DATE_SIZE] )
{
    int nIterator;
    int nErrorFlag;

    do
    {
    nErrorFlag = 1;

    cin.getline(szJoinDate, DATE_SIZE);
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "\n" << string(40, ' ') << "Invalid date!\n\n\tTry again: ";
        cin.getline(szJoinDate, DATE_SIZE);
    }


    for( nIterator = 0; nIterator < DATE_SIZE -1; nIterator++ )
    {
        if( (int)szJoinDate[nIterator] < (int)'0' || (int)szJoinDate[nIterator] > (int)'9' )
        {
            if( szJoinDate[nIterator] != '/')
            {
                cout << "\n" << string(40, ' ') << "Invalid date!\n\n\tTry again: ";
                nErrorFlag = 0;
                break;
            }
        }
    }
    }while( 0 == nErrorFlag );
}



void CValid::Input(char nInp[ARRAY_SIZE])
{
    int nErrorFlag;
    unsigned int nIterator;

    do
    {

    nErrorFlag = 1;

    cin.getline(nInp, ARRAY_SIZE);
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "\n" << string(40, ' ') << "Invalid input! Try again: ";
        cin.getline(nInp, ARRAY_SIZE);
    }
    while( 0 == strlen(nInp))
    {
        cout << "\n" << string(40, ' ') << "Invalid input! Try again: ";
        cin.getline(nInp, ARRAY_SIZE);
    }

    for( nIterator = 0; nIterator < strlen(nInp); nIterator++ )
    {
        if( ( (int)nInp[nIterator] < (int)'a' || (int)nInp[nIterator] > (int)'z' ) && ( (int)nInp[nIterator] < (int)'A'|| (int)nInp[nIterator] > (int)'Z') && ( ' ' != nInp[nIterator]  ) )
        {
            cout << "\n" << string(40, ' ') << "Invalid input! Try again: ";
            nErrorFlag = 0;
            break;
        }
    }
    }while( 0 == nErrorFlag);

}




void CValid::GenderCheck(char szGender[ARRAY_SIZE])
{
    char nGenderChoice;

    cout << "\n\t\t1.Male\n\n\t\t2.Female\n\n\tEnter gender: ";
    nGenderChoice = getche();
    cout << endl;

    while( nGenderChoice != '1' && nGenderChoice != '2' )
    {
        cout << "\n\n\tInvalid gender input\n\n\tEnter again: ";
        nGenderChoice = getche();
        cout << endl;
    }

    if( '1' == nGenderChoice )
    {
        strcpy( szGender , "Male");
    }
    else if ( '2' == nGenderChoice )
    {
        strcpy( szGender , "Female");
    }
}



void CValid::FloatCheck( char FloatInp[ARRAY_SIZE], float minimum, float maximum )
{
    float fFloatChk;

    FloatInput( FloatInp );
    fFloatChk = atof(FloatInp);

    if( fFloatChk < minimum || fFloatChk > maximum )
    {
        cout << "\n\n\tInvalid number! Number must be in range ("<< minimum << " - " << maximum <<")\n\n\tEnter again: ";
        FloatCheck( FloatInp, minimum, maximum);
    }
    cout << fFloatChk;
}



void CValid::FloatInput(char nFloat[ARRAY_SIZE])
{
    int nErrorFlag;
    unsigned int nIterator;

    do
    {

    nErrorFlag = 1;

    cin.getline(nFloat, ARRAY_SIZE);
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "\n\tInvalid input! Try again: ";
        cin.getline(nFloat, ARRAY_SIZE);
    }
    while( 0 == strlen(nFloat))
    {
        cout << "\n\tInvalid input! Try again: ";
        cin.getline(nFloat, ARRAY_SIZE);
    }

    for( nIterator = 0; nIterator < strlen(nFloat); nIterator++ )
    {
        if( ( (int)nFloat[nIterator] < (int)'0' || (int)nFloat[nIterator] > (int)'9' ) && ( (int)nFloat[nIterator] != (int)'.'  ) )
        {
            cout << "\n\tInvalid entry!\n\n\tTry again: " ;
            nErrorFlag = 0;
            break;
        }
    }
    }while( 0 == nErrorFlag);

}
