#ifndef CONCRETE_CONDIMENTS_HPP
#define CONCRETE_CONDIMENTS_HPP

#include "CondimentDecorator.hpp"

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage* beverage) : 
        CondimentDecorator(beverage)
    {
        setCondimentDescription(string("Mocha"));
        setCondimentCost(0.20f);
    }
};

class Whip : public CondimentDecorator
{
public:
    Whip(Beverage* beverage) : 
        CondimentDecorator(beverage)
    {
        setCondimentDescription(string("Whip"));
        setCondimentCost(0.10f);
    }
};

#endif // CONCRETE_CONDIMENTS_HPP