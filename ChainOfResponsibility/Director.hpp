#pragma once

#include "PurchaseHandler.hpp"

class Director : public PurchaseHandler 
{
public:
    void handleRequest( double amount ) const override 
    {
        if ( amount <= 5000.0 ) 
        {
            std::cout << "Director approves the purchase of $" << amount << "." << std::endl;
        }
        else if ( successor != nullptr ) 
        {
            successor->handleRequest( amount );
        }
    }
};
