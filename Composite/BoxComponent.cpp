#include "BoxComponent.hpp"

void BoxComponent::exec()
{
    std::cout << "- Box" << std::endl;
    for ( const auto& component : components )
    {
        std::cout << "    "; 
        component->exec();
        std::cout << std::endl; 
    }
}

void BoxComponent::add( std::unique_ptr< Component > component )
{
    components.push_back( std::move( component ) );
}