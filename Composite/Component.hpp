#ifndef COMPONENT_HPP
#define COMPONENT_HPP

class Component
{
public:
    virtual ~Component() {}
    virtual void exec() = 0;
};

#endif // COMPONENT_HPP