#include "NeapolitanPizza.hpp"

#include <iostream>

void NeapolitanPizza::bake() const
{
    std::cout << style + "NeapolitanPizza baked" << std::endl; 
}

void NeapolitanPizza::addStyle( const std::string& s )
{
    style = s;
}