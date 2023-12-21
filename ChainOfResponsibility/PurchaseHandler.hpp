#pragma once

#include <iostream>
#include <memory>

class PurchaseHandler {
protected:
    std::shared_ptr< PurchaseHandler > successor;

public:
    PurchaseHandler() : successor( nullptr ) {}
    virtual ~PurchaseHandler() {}

    void setSuccessor( std::shared_ptr< PurchaseHandler > successor ) {
        this->successor = successor;
    }

    virtual void handleRequest( double amount ) const = 0;
};
