#include "Director.hpp"
#include "ConcreteBuilder.hpp"

int main()
{
    Director director;
    ConcreteBuilder* builder = new ConcreteBuilder;
    director.setBuilder( builder );
    director.standardBuild();
    auto product = builder->getProduct();

    delete product;
    delete builder;
    
    return 0;
}