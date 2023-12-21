#pragma once

#include "DVDPlayer.hpp"
#include "AudioSystem.hpp"
#include "Projector.hpp"

#include <memory>

class HomeTheaterFacade {
private:
    std::shared_ptr< DVDPlayer > dvdPlayer;
    std::shared_ptr< AudioSystem > audioSystem;
    std::shared_ptr< Projector > projector;

public:
    HomeTheaterFacade( std::shared_ptr< DVDPlayer > dvdPlayer, std::shared_ptr< AudioSystem > audioSystem, std::shared_ptr< Projector > projector )
        : dvdPlayer( dvdPlayer ), audioSystem( audioSystem ), projector( projector ) {}

    void watchMovie( std::string movie )
    {
        std::cout << "Get ready to watch a movie..." << std::endl;
        
        dvdPlayer->on();
        dvdPlayer->play( movie );
        
        audioSystem->on();
        audioSystem->setVolume( 10 );
        
        projector->on();
        projector->setInput( "DVD" );
    }

    void endMovie()
    {
        std::cout << "Shutting down the home theater..." << std::endl;
        
        dvdPlayer->off();
        audioSystem->off();
        projector->off();
    }
};
