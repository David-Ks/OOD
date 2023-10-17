#include "StandardFactory.hpp"

std::unique_ptr< Product > StandardFactory::create() const
{
    return std::make_unique< StandardProduct >();
}
