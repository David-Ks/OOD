#ifndef GENERATOR_ADAPTER_HPP
#define GENERATOR_ADAPTER_HPP

#include "Generator.hpp"
#include "Random.hpp"

#include <memory>

class GeneratorAdapter : public Generator
{
public:
    GeneratorAdapter( const Random& );
    int next() const override;

private:
    const Random& adaptee;
};

#endif // GENERATOR_ADAPTER_HPP