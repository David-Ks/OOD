#pragma once

#include "PurchaseHandler.hpp"

class Manager : public PurchaseHandler
{
public:
    void handleRequest( double amount ) const override 
    {
        if ( amount <= 1000.0 ) 
        {
            std::cout << "Manager approves the purchase of $" << amount << "." << std::endl;
        } 
        else if ( successor != nullptr ) 
        {
            successor->handleRequest( amount );
        }
    }
};
