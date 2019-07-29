
/**
 * File CProduct.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of CProduct class.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */

#include "CProduct.h"


// ---------------------------------------------------------------------------
// Method      : Constructor
// Parameters  : Nil
// Returns     : void
// Description : Constructor to initialize members.
// ---------------------------------------------------------------------------

CProduct::CProduct()
{
    //ctor
}

// ---------------------------------------------------------------------------
// Method      : Readproduct
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Read details.
// ---------------------------------------------------------------------------

void CProduct::ReadProduct()
{
    cout << "\n\n" << string( 40, ' ' ) << "Product ID: ";
    CValid::IntCheck( m_cProductId, 0, 10000 );
    cout << "\n\n" << string( 40, ' ' ) << "Product Name: ";
    CValid::Input( m_cProductName );
    cout << "\n\n" << string( 40, ' ' ) << "Price: ";
    CValid::IntCheck( m_cPrice,0,10000 );
    cout << "\n\n" << string( 40, ' ' ) << "Quantity: ";
    CValid::IntCheck( m_cQuantity,0,10000 );
    cout << "\n\n" << string( 40, ' ' ) << "Company: ";
    cin.ignore();
    CValid::Input(m_cProductCompany);
    cout << "\n\n" << string( 40, ' ' ) << "Manufacture date (DD/MM/YYYY): ";
    CValid::DateCheck( m_cManufactureDate );
}

// ---------------------------------------------------------------------------
// Method      : DisplayProduct
// Parameters  : Nil
// Returns     : void
// Description : Member function of class to Display product.
// ---------------------------------------------------------------------------

void CProduct::DisplayProduct()
{
    cout << m_cProductName << "\t\t" << m_cProductType << "\t\t" <<  m_cPrice << "\t\t" << m_cQuantity << "\t\t" << m_cProductCompany << "\t\t" << m_cManufactureDate << "\n\n" ;
}
