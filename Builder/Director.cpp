#include "Director.hpp"

void Director::setBuilder( Builder* newBuilder )
{
    builder = newBuilder;
}

void Director::standardBuild()
{
    builder->buildStepOne();
    builder->buildStepTwo();
}