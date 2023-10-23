#ifndef BOX_COMPONENT_HPP
#define BOX_COMPONENT_HPP

#include "Component.hpp"

#include <iostream>
#include <memory>
#include <vector>

class BoxComponent : public Component
{
public:
    void exec() override;

public:
    void add( std::unique_ptr< Component > );

private:
    std::vector< std::unique_ptr< Component > > components;
};

#endif // BOX_COMPONENT_HPP