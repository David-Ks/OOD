#ifndef SICILIAN_PIZZA_HPP
#define SICILIAN_PIZZA_HPP

#include "Pizza.hpp"

#include <string>

class SicilianPizza : public Pizza
{
public:
    void bake() const override;
    void addStyle( const std::string& ) override;

private:
    std::string style = "";
};

#endif // SICILIAN_PIZZA_HPP