#ifndef CONCRETE_BEVERAGES_HPP
#define CONCRETE_BEVERAGES_HPP

#include "Beverage.hpp"

class Espresso : public Beverage
{
public:
    Espresso()
    {
        setDescription(string("Espresso"));
        setCost(1.99);
    }
};

class Decaf : public Beverage
{
public:
    Decaf()
    {
        setDescription(string("Decaf"));
        setCost(1.05);
    }
};

#endif // CONCRETE_BEVERAGES_HPP