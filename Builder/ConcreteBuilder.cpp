#include "ConcreteBuilder.hpp"

void ConcreteBuilder::buildStepOne()
{
    prod->setNum( 5 );
}

void ConcreteBuilder::buildStepTwo()
{
    prod->setColor( 0 );
}

ConcreteBuilder::ConcreteBuilder()
{
    prod = new Product;
}

ConcreteBuilder::~ConcreteBuilder()
{
    delete prod; prod = 0;
}

Product* ConcreteBuilder::getProduct()
{
    Product* result = prod;
    delete prod; prod = 0;
    return result;
}