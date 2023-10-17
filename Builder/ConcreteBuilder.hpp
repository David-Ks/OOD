#ifndef CONCRETE_BUILDER_HPP
#define CONCRETE_BUILDER_HPP

#include "Builder.hpp"
#include "Product.hpp"

class ConcreteBuilder : public Builder
{
private:
    Product* prod;

public:
    ConcreteBuilder();
    ~ConcreteBuilder();

public:
    void buildStepOne() override;
    void buildStepTwo() override;

    Product* getProduct();
};

#endif // CONCRETE_BUILDER_HPP