#ifndef EVEN_NUM_HPP
#define EVEN_NUM_HPP

#include "Generator.hpp"

#include <memory>

class EvenNum
{
public:
    EvenNum( std::unique_ptr< Generator > );
    int getNum() const;

private:
    std::unique_ptr< Generator > gen;
};

#endif // EVEN_NUM_HPP