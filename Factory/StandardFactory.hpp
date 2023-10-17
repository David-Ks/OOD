#ifndef STANDARD_FACTORY_HPP
#define STANDARD_FACTORY_HPP

#include "Factory.hpp"
#include "StandardProduct.hpp"

class StandardFactory : public Factory
{
public:
    std::unique_ptr< Product > create() const override;
};

#endif // STANDARD_FACTORY_HPP