#include "StandardFactory.hpp"
#include "NotStandardFactory.hpp"

void callGet( std::unique_ptr< Factory > factory )
{
    auto obj = factory->create();
    obj->get();
}

int main()
{
    std::unique_ptr< Factory > standardFact = std::make_unique< StandardFactory >();
    callGet( std::move( standardFact ) );
    std::unique_ptr< Factory > notStandardFact = std::make_unique< NotStandardFactory >();
    callGet( std::move( notStandardFact ) );
    return 0;
}