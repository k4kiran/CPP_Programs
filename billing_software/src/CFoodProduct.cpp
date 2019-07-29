
/**
 * File CFoodProduct.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of functions.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */

#include "CFoodProduct.h"

// ---------------------------------------------------------------------------
// Method      : Constructor
// Parameters  : Nil
// Returns     : void
// Description : Constructor to initialize members.
// ---------------------------------------------------------------------------

CFoodProduct::CFoodProduct()
{
    //ctor
}

// ---------------------------------------------------------------------------
// Method      : AssignType
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to assign product type.
// ---------------------------------------------------------------------------

void CFoodProduct::AssignType()
{
    string szType = "Food";
    strcpy( m_cProductType,szType.c_str() );
}

// ---------------------------------------------------------------------------
// Method      : ReadProduct
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to read product details
// ---------------------------------------------------------------------------

void CFoodProduct::ReadProduct()
{
    cout << "\n\n" << string( 40, ' ' ) << "Product ID: ";
    CValid::IntCheck( m_cProductId, 0, 10000 );
    cout << "\n\n" << string( 40, ' ' ) << "Name: ";
    CValid::Input(m_cProductName);
    cout << "\n\n" << string( 40, ' ' ) << "Price: ";
    CValid::IntCheck( m_cPrice, 0, 10000 );
    cout << "\n\n" << string( 40, ' ' ) << "Quantity: ";
    CValid::IntCheck( m_cQuantity,0,10000 );
    cout << "\n\n" << string( 40, ' ' ) << "Company: ";
    cin.ignore();
    CValid::Input( m_cProductCompany );
    cout << "\n\n" << string( 40, ' ' ) << "Manufacture date (DD/MM/YYYY): ";
    CValid::DateCheck( m_cManufactureDate );
}

// ---------------------------------------------------------------------------
// Method      : DisplayProduct
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Display product details.
// ---------------------------------------------------------------------------

void CFoodProduct::DisplayProduct()
{
    cout << "\n\n\n" << m_cProductId << "\t\t\t" << m_cProductName << "\t\t\t" << m_cProductType << "\t\t\t" <<  m_cPrice << "\t\t\t" << m_cQuantity << "\t\t\t" << m_cProductCompany << "\t\t" << m_cManufactureDate << "\n\n" ;
}

// ---------------------------------------------------------------------------
// Method      : GetProductId
// Parameters  : Nil
// Returns     : <char*> -product id of product
// Description : Member function of class to return product id.
// ---------------------------------------------------------------------------

char* CFoodProduct::GetProductId()
{
    return m_cProductId;
}
