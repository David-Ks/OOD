#ifndef BAKER_HPP
#define BAKER_HPP

#include "../Pizzas/NeapolitanPizza.hpp"
#include "../Pizzas/SicilianPizza.hpp"

#include <memory>

class Baker
{
public:
    virtual std::unique_ptr< Pizza > bakeNeaplitanPizza() const = 0;
    virtual std::unique_ptr< Pizza > bakeSicilianPizza() const = 0;
};

#endif // BAKER_HPP