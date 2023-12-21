#pragma once

#include "PurchaseHandler.hpp"

class CEO : public PurchaseHandler 
{
public:
    void handleRequest(double amount) const override 
    {
        if (amount > 5000.0) 
        {
            std::cout << "CEO approves the purchase of $" << amount << "." << std::endl;
        }
        else 
        {
            std::cout << "Amount is too low for CEO approval." << std::endl;
        }
    }
};
