#include "Bakers/ArmenianBaker.hpp"

int main()
{
    ArmenianBaker baker;
    std::unique_ptr< Pizza > pizza = baker.bakeNeaplitanPizza();
    pizza->bake();
    return 0;
}