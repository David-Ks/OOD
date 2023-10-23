#include "BoxComponent.hpp"
#include "ProductComponent.hpp"

std::unique_ptr< Component > load()
{
    auto box = std::make_unique< BoxComponent >();
    box->add( std::make_unique< ProductComponent >() );
    box->add( std::make_unique< ProductComponent >() );

    auto box2 = std::make_unique< BoxComponent >(); 
    box2->add( std::make_unique< ProductComponent >() );
    box2->add( std::make_unique< ProductComponent >() );

    box->add( std::move( box2 ) );

    return std::move( box );
}

int main()
{
    auto component = load();
    component->exec();
    return 0;
}