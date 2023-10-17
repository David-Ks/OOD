#ifndef BUILDER_HPP
#define BUILDER_HPP

class Builder
{
public:
    virtual ~Builder() {}
    virtual void buildStepOne() = 0;
    virtual void buildStepTwo() = 0;
};

#endif // BUILDER_HPP