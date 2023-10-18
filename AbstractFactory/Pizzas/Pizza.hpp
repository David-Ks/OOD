#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <string>

class Pizza
{
public:
    virtual ~Pizza() {}
    virtual void bake() const = 0;
    virtual void addStyle( const std::string& ) = 0;
};

#endif // PIZZA_HPP