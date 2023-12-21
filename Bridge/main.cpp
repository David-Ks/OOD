#include <iostream>

#include "TV.hpp"
#include "Radio.hpp"
#include "BasicRemoteControl.hpp"
#include "AdvancedRemoteControl.hpp"

int main()
{
    std::shared_ptr< Device > tv = std::make_shared< TV >();
    std::shared_ptr< Device > radio = std::make_shared< Radio >();

    std::shared_ptr< RemoteControl > basicRemoteForTV = std::make_shared< BasicRemoteControl >( tv );
    std::shared_ptr< RemoteControl > advancedRemoteForRadio = std::make_shared< AdvancedRemoteControl >( radio );

    basicRemoteForTV->togglePower();
    basicRemoteForTV->setChannel( 5 );

    advancedRemoteForRadio->togglePower();
    advancedRemoteForRadio->setChannel( 101.5 );

    return 0;
}
