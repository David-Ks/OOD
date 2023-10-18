#ifndef NEAPOLITAN_PIZZA_HPP
#define NEAPOLITAN_PIZZA_HPP

#include "Pizza.hpp"

class NeapolitanPizza : public Pizza
{
public:
    void bake() const override;
    void addStyle( const std::string& ) override;

private:
    std::string style = "";
};

#endif // NEAPOLITAN_PIZZA_HPP