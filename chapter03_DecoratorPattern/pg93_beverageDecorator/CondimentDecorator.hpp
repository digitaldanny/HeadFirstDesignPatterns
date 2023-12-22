#ifndef CONDIMENT_DECORATOR_HPP
#define CONDIMENT_DECORATOR_HPP

#include "Beverage.hpp"
#include <string>

#include <iostream>
using namespace std;

using std::string;

class CondimentDecorator : public Beverage
{
private:
    Beverage* beverage; // Subject of this decorator

    // Why does description / cost have its own implementation here?
    //
    // Goal: I'd like condiment subclasses to simply define their description / cost in 
    //       their own constructors.
    // Problem: Because I am trying to avoid protected variables in the Beverage class
    //       AND am using an overriden getDescription method, I cannot simply set / get
    //       the inherited CondimentDecorator.description/cost. But I do not want to 
    //       re-implement getDescription and getCost with hardcoded values for each of 
    //       the subclass condiments.
    // Solution: Thus, I am making a new description/cost which unfortunately bloats 
    //       the size of this class. After I learn the basics of Design Patterns, it
    //       will be good to come back and learn how this is handled in the real world.
    string description;
    float cost;
public:
    CondimentDecorator(Beverage* beverage);
    void setCondimentDescription(string description);
    void setCondimentCost(float cost);
    
    // Beverage overrides
    string getDescription() override;
    float getCost() override;
};

CondimentDecorator::CondimentDecorator(Beverage* beverage) { this->beverage = beverage; }
void CondimentDecorator::setCondimentDescription(string description) { this->description = description; }
void CondimentDecorator::setCondimentCost(float cost) { this->cost = cost; }

string CondimentDecorator::getDescription()
{
    return beverage->getDescription() + string(", ") + this->description;
}

float CondimentDecorator::getCost()
{
    return beverage->getCost() + this->cost;
}

#endif // CONDIMENT_DECORATOR_HPP