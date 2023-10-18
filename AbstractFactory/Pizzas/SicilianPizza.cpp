#include "SicilianPizza.hpp"

#include <iostream>

void SicilianPizza::bake() const
{
    std::cout << style + "SicilianPizza baked" << std::endl;
}

void SicilianPizza::addStyle( const std::string& s )
{
    style = s;
}
