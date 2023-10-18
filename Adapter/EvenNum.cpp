#include "EvenNum.hpp"

EvenNum::EvenNum( std::unique_ptr< Generator > g )
    : gen( std::move( g ) )
{}

int EvenNum::getNum() const
{
    return gen->next() * 2;
}