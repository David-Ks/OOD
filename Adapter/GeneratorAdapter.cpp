#include "GeneratorAdapter.hpp"

GeneratorAdapter::GeneratorAdapter( const Random& adaptee )
    : adaptee( adaptee )
{}

int GeneratorAdapter::next() const
{
    return adaptee.random();
}