
/**
 * File CManager.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CManger class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */

#include "CManager.h"

// ---------------------------------------------------------------------------
// Method      : Constructor
// Parameters  : Nil
// Returns     : void
// Description : Constructor for initialization.
// ---------------------------------------------------------------------------

CManager::CManager()
{
    //ctor
}

// ---------------------------------------------------------------------------
// Method      : MainManager
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Display manage all function calls.
// ---------------------------------------------------------------------------

void CManager::MainManager()
{

    //displaying homepage
    MainMenuPoint:
    system( "CLS" );
    this->MainTitle();
    this->MainMenu();
    CValid::IntCheck( cChoicemainMenu, 1, 3 );
    int nChoiceMenu = atoi( cChoicemainMenu );
    switch( nChoiceMenu )
    {
    case 1:
        //Displaying Admin Submenu
        AdminMenuPoint:
        system( "CLS" );
        this->MainTitle();
        this->AdminMenu();
        CValid::IntCheck( cChoiceAdmin , 1, 6 );
        nChoiceAdminMenu = atoi( cChoiceAdmin );
        switch( nChoiceAdminMenu )
        {
            case 1:
                system( "CLS" );
                this->MainTitle();
                this->TypeMenu();
                CValid::IntCheck( cChoiceType , 1, 3 );
                nChoiceTypeMenu = atoi(cChoiceType);

                //Write files
                if( nChoiceTypeMenu == 1 )
                {
                    system( "CLS" );
                    this->MainTitle();
                    this->WriteFood();
                    cout << "\n\n\n\n" << string( 40, ' ' ) << "Press any key to continue";
                    getch();
                    goto AdminMenuPoint;
                }
                else if(nChoiceTypeMenu == 2 )
                {
                    system( "CLS" );
                    this->MainTitle();
                    this->WriteHouseHold();
                    cout << "\n\n\n\n" << string( 40, ' ' ) << "Press any key to continue";
                    getch();
                    goto AdminMenuPoint;
                }
                else if( nChoiceTypeMenu == 3 )
                {
                    goto AdminMenuPoint;
                }
                else
                {

                    //not needed
                }
                break;

            case 2:
                system( "CLS" );
                this->MainTitle();
                this->TypeMenu();
                CValid::IntCheck( cChoiceType , 1, 3 );
                nChoiceTypeMenu = atoi( cChoiceType );

                //Read files
                if( nChoiceTypeMenu == 1 )
                {
                    system( "CLS" );
                    this->MainTitle();
                    this->HeadingOutput();
                    this->ReadFood();
                    getch();
                    goto AdminMenuPoint;
                }
                else if( nChoiceTypeMenu == 2 )
                {
                    system("CLS");
                    this->MainTitle();
                    this->HeadingOutput();
                    this->ReadHouseHold();
                    getch();
                    goto AdminMenuPoint;
                }
                else if( nChoiceTypeMenu == 3 )
                {
                    goto AdminMenuPoint;
                }
                break;

            case 3:
                system( "CLS" );
                this->MainTitle();
                this->HeadingOutput();
                this->SearchProduct();
                cout << "\n\n\n\n" << string( 40, ' ' ) << "Press any key to continue";
                getch();
                goto AdminMenuPoint;
                break;

            case 4:
                system( "CLS" );
                cout << "\n\n\n\n";
                cout << string( 40, ' ' ) << "IN PROGRESS...\n\n";
                cout << string( 40, ' ' ) << "Sorry for the inconvenience...\n\n\n";
                cout << "\n\n\n\n" << string( 40, ' ' ) << "Press any key to continue";
                getch();
                goto AdminMenuPoint;
                break;

            case 5:
                system( "CLS" );
                cout << "\n\n\n\n";
                cout << string( 40, ' ' ) << "IN PROGRESS...\n\n";
                cout << string( 40, ' ' ) << "Sorry for the inconvenience...\n\n\n";
                cout << "\n\n\n\n" << string( 40, ' ' ) << "Press any key to continue";
                getch();
                goto AdminMenuPoint;
                break;

            case 6:
                goto MainMenuPoint;

            default:
                cout << string( 40, ' ' ) << "Please choose valid option from menu: ";
            }
            break;

        case 2:
            system( "CLS" );
            this->MainTitle();
            this->CustomerMenu();
            goto MainMenuPoint;
            break;

        case 3:
            cout << "\n\n\n\n" << string( 40,' ' ) << "Exiting the program";
            exit( 0 );

        break;

        default:
            cout << "Please choose valid option from the menu : ";
    }
}

// ---------------------------------------------------------------------------
// Method      : MainTitle
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Display the Homepage Title.
// ---------------------------------------------------------------------------

void CManager::MainTitle()
{
    cout << "****************************************************** BILLING SOFTWARE ************************************************";
}

// ---------------------------------------------------------------------------
// Method      : MainMenu
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to display main menu.
// ---------------------------------------------------------------------------

void CManager::MainMenu()
{
    cout << "\n\n\n\n\n" << string( 40,' ' ) << "1.Administrator\n\n";
    cout << string( 40,' ' ) << "2.Customer\n\n" << string( 40,' ' ) << "3.Exit\n\n" << string( 40,' ' ) << "Enter your preferred choice from menu (1,2 or 3):";
}

// ---------------------------------------------------------------------------
// Method      : TypeMenu
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to display types of product menu.
// ---------------------------------------------------------------------------

void CManager::TypeMenu()
{
    cout << "\n\n\n\n\n" << string( 40,' ' ) << "1.Food Items\n\n";
    cout << string( 40,' ' ) << "2.HouseHold Items\n\n" << string( 40,' ' ) << "3.Exit\n\n" << string( 40,' ' ) << "Enter your preferred choice from menu (1,2 or 3):";
}

// ---------------------------------------------------------------------------
// Method      : AdminMenu
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to display administrator menu.
// ---------------------------------------------------------------------------

void CManager::AdminMenu()
{
    cout << "\n\n\n\n\n";
    cout << string( 40,' ' ) << "1.Create Product\n\n";
    cout << string( 40,' ' ) << "2.Display Product\n\n";
    cout << string( 40,' ' ) << "3.Search Product\n\n";
    cout << string( 40,' ' ) << "4.Modify Product\n\n";
    cout << string( 40,' ' ) << "5.Delete Product\n\n";
    cout << string( 40,' ' ) << "6.Main Menu\n\n";
    cout << string( 40,' ' ) << "Please enter your preferred choice from menu (enter 1,2,3,4,5 or 6): ";
}

// ---------------------------------------------------------------------------
// Method      : CustomerMenu
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to display menu for customer
// ---------------------------------------------------------------------------

void CManager::CustomerMenu()
{
    cout << "\n\n\n\n\n";
    cout << string( 40,' ' ) << "1.Place Order\n\n";
    cout << string( 40,' ' ) << "2.Exit\n\n";
    cout << string( 40,' ' ) << "Please enter your preferred choice from menu (1 or 2): ";
    system("CLS");
    this->MainTitle();
    cout << "\n\n\n\n\n";
    cout << string( 40, ' ' ) << "IN PROGRESS...\n\n";
    cout << string( 40, ' ' ) << "Sorry for the inconvenience...\n\n\n";
    cout << "\n\n\n\n" << string( 40, ' ' ) << "Press any key to continue";
    getch();
}

// ---------------------------------------------------------------------------
// Method      : WriteFood
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to write food items to file.
// ---------------------------------------------------------------------------

void CManager::WriteFood()
{
    CFoodProduct foodwrite;
    foodwrite.AssignType();
    foodwrite.ReadProduct();
    ofstream storefile;
    storefile.open( "fooddata.dat", ios::app | ios::binary );
    if( !storefile )
    {
        cout << "\nError!! cant create file";
    }
    else
    {
        storefile.write( ( char* )&foodwrite ,sizeof( foodwrite ) );
    }
    cout << "\n\n" << string( 40,' ' ) << "file created successfully";
    getch();
    storefile.close();
}

// ---------------------------------------------------------------------------
// Method      : ReadFood
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read food items from file
// ---------------------------------------------------------------------------

void CManager::ReadFood()
{
    CFoodProduct foodread;
    ifstream readfile;
    readfile.open( "fooddata.dat", ios::in | ios::binary );
    while( readfile.read( ( char * ) &foodread, sizeof( foodread ) ) )
    {
        foodread.DisplayProduct();
    }
    readfile.close();
}

// ---------------------------------------------------------------------------
// Method      : WriteHouseHold
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to store household items to file.
// ---------------------------------------------------------------------------

void CManager::WriteHouseHold()
{
    CHouseProduct housewrite;
    housewrite.AssignType();
    housewrite.ReadProduct();
    ofstream storefile;
    storefile.open( "Householddata.dat", ios::app | ios::binary );
    if( !storefile )
    {
        cout << "\nError!! cant create file";
    }
    else
    {
        storefile.write( ( char* )&housewrite ,sizeof( housewrite ) );
    }
    cout << "\n\n" << string( 40,' ' ) << "file created successfully";
    storefile.close();
}

// ---------------------------------------------------------------------------
// Method      : ReadHouseHold
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read household items from file.
// ---------------------------------------------------------------------------

void CManager::ReadHouseHold()
{
    CHouseProduct houseread;
    ifstream readfile;
    readfile.open("Householddata.dat", ios::in | ios::binary );
    while( readfile.read( ( char * ) &houseread, sizeof( houseread ) ) )
    {
        houseread.DisplayProduct();
    }
    readfile.close();
}

// ---------------------------------------------------------------------------
// Method      : SearchProduct
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to search a product in file.
// ---------------------------------------------------------------------------

void CManager::SearchProduct()
{
    ifstream readfile;
    CFoodProduct foodread;
    CHouseProduct houseread;
    char cProductId[MAX_SIZE];
    cout << "\n\n\n" << string(40, ' ') << "Product ID: ";
    CValid::IntCheck( cProductId, 0, 10000 );

    //Searching in food items file
    readfile.open( "fooddata.dat", ios::in | ios::binary );
    while( readfile.read( ( char * ) &foodread, sizeof( foodread ) ) )
    {
        if( !( strcmp( foodread.GetProductId(), cProductId ) ) )
        {
            foodread.DisplayProduct();
        }
        else
        {
            cout << "\n\n" << string( 40,' ' ) << "Not found any items in food section";
        }
    }
    readfile.close();

    //checking in household items file.
    readfile.open( "Householddata.dat", ios::in | ios::binary );
    while( readfile.read( ( char * ) &houseread, sizeof( houseread ) ) )
    {
        if( !( strcmp( houseread.GetProductId(), cProductId ) ) )
        {
            houseread.DisplayProduct();
        }
        else
        {
            cout << "\n\n" << string( 40,' ' ) << "Not found any items in household section section";
        }
    }
    readfile.close();
}

// ---------------------------------------------------------------------------
// Method      : HeadingOutput
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to print heading of output.
// ---------------------------------------------------------------------------

void CManager::HeadingOutput()
{
    cout << "\n\n\nProduct ID" << "\t\t" << "Product Name" << "\t\t" << "Product Type" << "\t\t" <<  "product Price" << "\t\t" << "Quantity" << "\t\t" << "Company" << "\t\t" << "Manufacturing date" << "\n\n\n";
}
