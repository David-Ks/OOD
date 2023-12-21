#include <iostream>

#include "Manager.hpp"
#include "Director.hpp"
#include "CEO.hpp"

int main() 
{
    std::shared_ptr< Manager > manager = std::make_shared< Manager >();
    std::shared_ptr< Director > director = std::make_shared< Director >();
    std::shared_ptr< CEO > ceo = std::make_shared< CEO >();

    manager->setSuccessor(director);
    director->setSuccessor(ceo);

    manager->handleRequest(800.0);
    std::cout << std::endl;
    
    manager->handleRequest(3500.0);
    std::cout << std::endl;

    manager->handleRequest(10000.0);
    std::cout << std::endl;

    manager->handleRequest(500.0);

    return 0;
}
