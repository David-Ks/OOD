#ifndef NOT_STANDARD_FACTORY_HPP
#define NOT_STANDARD_FACTORY_HPP

#include "Factory.hpp"
#include "NotStandardProduct.hpp"

class NotStandardFactory : public Factory
{
public:
    std::unique_ptr< Product > create() const override;
};

#endif // NOT_STANDARD_FACTORY_HPP