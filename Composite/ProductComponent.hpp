#ifndef PRODUCT_COMPONENT_HPP
#define PRODUCT_COMPONENT_HPP

#include "Component.hpp"

#include <iostream>

class ProductComponent : public Component 
{
public:
    void exec() override;
};

#endif // PRODUCT_COMPONENT_HPP