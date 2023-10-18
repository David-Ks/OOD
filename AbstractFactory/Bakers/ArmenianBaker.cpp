#include "ArmenianBaker.hpp"

std::unique_ptr< Pizza > ArmenianBaker::bakeNeaplitanPizza() const
{
    auto pizza = std::make_unique< NeapolitanPizza >();
    pizza->addStyle( "Armenian " );
    return pizza;
}

std::unique_ptr< Pizza > ArmenianBaker::bakeSicilianPizza() const
{
    auto pizza = std::make_unique< SicilianPizza >();
    pizza->addStyle( "Armenian " );
    return pizza;
}