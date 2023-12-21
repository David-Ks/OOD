#include <iostream>

#include "BasicPen.hpp"
#include "RedInk.hpp"
#include "LargeSize.hpp"

int main() {
    std::shared_ptr< Pen > basicPen = std::make_shared< BasicPen >();
    std::cout << basicPen->write() << std::endl;

    std::shared_ptr< Pen > redInkPen = std::make_shared< RedInk >( basicPen );
    std::cout << redInkPen->write() << std::endl;

    std::shared_ptr< Pen > largeRedInkPen = std::make_shared< LargeSize >( redInkPen );
    std::cout << largeRedInkPen->write() << std::endl;

    return 0;
}
