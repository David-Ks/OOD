#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "Product.hpp"

#include <memory>

class Factory
{
public:
    virtual std::unique_ptr< Product > create() const = 0;
};

#endif // FACTORY_HPP