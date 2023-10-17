#ifndef NOT_STANDARD_PRODUCT_HPP
#define NOT_STANDARD_PRODUCT_HPP

#include "Product.hpp"

class NotStandardProduct : public Product
{
public:
    void get() const override;
};

#endif // NOT_STANDARD_PRODUCT_HPP