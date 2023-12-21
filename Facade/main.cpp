#include <iostream>

#include "HomeTeatherFacade.hpp"

int main() 
{
    std::shared_ptr< DVDPlayer > dvdPlayer = std::make_shared< DVDPlayer >();
    std::shared_ptr< AudioSystem > audioSystem = std::make_shared< AudioSystem >();
    std::shared_ptr< Projector > projector = std::make_shared< Projector >();

    std::shared_ptr< HomeTheaterFacade > homeTheater = std::make_shared< HomeTheaterFacade >( dvdPlayer, audioSystem, projector );

    homeTheater->watchMovie( "Inception" );
    std::cout << std::endl;
    homeTheater->endMovie();

    return 0;
}
