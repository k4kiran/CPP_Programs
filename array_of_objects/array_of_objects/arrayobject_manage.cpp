/**
 * File arrayobject_manage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the member functions of  class " CEmployee ".
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */
#include<string.h>
#include "arrayobject_manage.h"


void Display(int nCount, CEmployee *pEmployee1 )
{

    //Displaying details of programmers
    cout << "\n\n-------------------PROGRAMMERS------------------------\n";
    cout << "NAME\tAGE\tSALARY\tDESIGNATION\n\n";
    for( int i=0;i < nCount;i++ )
    {
        if( pEmployee1[i].m_szDesignation == "Programmer" )
        {
            pEmployee1[i].DisplayDetails();

        }
    }

    //Displaying details of Data Analysts
    cout << "\n\n-------------------DATA ANALYST------------------------\n";
    cout << "NAME\tAGE\tSALARY\tDESIGNATION\n\n";
    for( int i=0;i < nCount;i++ )
    {
        if( pEmployee1[i].m_szDesignation == "Data Analyst" )
        {
            pEmployee1[i].DisplayDetails();

        }
    }

    //Displaying details of Web Designers
    cout << "\n\n-------------------WEB DESIGNERS------------------------\n";
    cout << "NAME\tAGE\tSALARY\tDESIGNATION\n\n";
    for( int i=0;i < nCount;i++ )
    {
        if( pEmployee1[i].m_szDesignation == "Web Designer" )
        {
            pEmployee1[i].DisplayDetails();

        }
    }
}

// -------------------------------------------------------
// Method      : ReadDetails
// Parameters  : Nil
// Returns     : void
// Description : Reads employee details
// -------------------------------------------------------

void CEmployee::ReadDetails()
{
        cout << "Enter the name of Employee: ";
        getchar();
        getline(cin, m_szEmpName);
        cout << "Enter age of employee: ";
        cin >> m_nAge;
        cout << "Enter the salary: ";
        cin >> m_nSalary;
 }

 void CEmployee::DesignationRead()
 {
        int nChoiceDesignation;//remove
        cout << "1.Programmer\n2.Data Analyst\n3.Web Designer\n";
        cout << "Choose Designation From The Menu: ";
        cin >> nChoiceDesignation;
        switch(nChoiceDesignation)
        {

            case 1:
                m_szDesignation = "Programmer";
                break;

            case 2:
                m_szDesignation = "Data Analyst";
                break;

            case 3:
                m_szDesignation = "Web Designer";
                break;

            default:
                cout << "\nInvalid Character";
        }

 }

// -------------------------------------------------------
// Method      : DisplayDetails
// Parameters  : Nil
// Returns     : void
// Description : Displays employee details
// -------------------------------------------------------

void CEmployee::DisplayDetails()
{

    /*Display( nCount,Employee1 );
    cout << "\nName: " << m_szEmpName;
    cout << "\nAge: " << m_nAge;
    cout << "\nDesignation: " << m_szDesignation;
    cout << "\nSalary: " << m_nSalary <<"\n";
*/
    cout << m_szEmpName <<"\t";
    cout << m_nAge << "\t";
    cout << m_nSalary <<"\t";
    cout << m_szDesignation <<"\n";
}


void UserInterface()

{
    cout << "***************EMPLOYEE REGISTRATION**********************\n";
    cout << "How many employee data you want to store ? ";

}
