#include "EvenNum.hpp"
#include "GeneratorAdapter.hpp"
#include "Random.hpp"

#include <iostream>

int main()
{
    Random rand;
    std::unique_ptr< Generator > randAdapter = std::make_unique< GeneratorAdapter >( rand );
    EvenNum randomEvenNum( std::move( randAdapter ) );
    
    std::cout << randomEvenNum.getNum() << std::endl;
    return 0;
}