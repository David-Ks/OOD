#ifndef STANDARD_PRODUCT_HPP
#define STANDARD_PRODUCT_HPP

#include "Product.hpp"

class StandardProduct : public Product
{
public:
    void get() const override;
};

#endif // STANDARD_PRODUCT_HPP