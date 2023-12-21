#pragma once

#include <string>

class Pen
{
public:
    virtual ~Pen() {}
    virtual std::string write() const = 0;
};