#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "Builder.hpp"

class Director
{
private:
    Builder* builder;

public:
    void setBuilder( Builder* );
    void standardBuild();
};

#endif // DIRECTOR_HPP