#include "NotStandardFactory.hpp"

std::unique_ptr< Product > NotStandardFactory::create() const
{
    return std::make_unique< NotStandardProduct >();
}
