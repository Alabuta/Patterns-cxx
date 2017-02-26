#include "Director.h"


void Director::Construct(IBuilder &_builder) const
{
    _builder.BuildPartA();
    _builder.BuildPartB();
}