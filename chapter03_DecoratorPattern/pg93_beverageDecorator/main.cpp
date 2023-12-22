#include <iostream>
#include <list>

#include "ConcreteBeverages.hpp"
#include "ConcreteCondiments.hpp"

#include <memory>

void printBeverageInfo(Beverage* beverage)
{
    std::cout << beverage->getDescription() << ", " << beverage->getCost() << std::endl;
}

/*
OUTPUT:
> Espresso, 1.99  
> Espresso, Mocha, Mocha, Whip, 2.49  
> Decaf, Whip, 1.15  
*/
int main()
{
    // NOTE: Danny, this is C++. Learn how to use unique_ptr...
    // Espresso, cost = 1.99
    Beverage* espresso = new Espresso();
    printBeverageInfo(espresso);

    // Espresso, double mocha, whip
    // Cost = 1.99 + 0.20 + 0.20 + 0.10 = 2.49
    Beverage* mocha1 = new Mocha(espresso);
    Beverage* mocha2 = new Mocha(mocha1);
    Beverage* whip1 = new Whip(mocha2);
    printBeverageInfo(whip1);

    // Decaf, whip
    // Cost = 1.05 + 0.10 = 1.15
    Beverage* decaf = new Decaf();
    Beverage* whip2 = new Whip(decaf);
    printBeverageInfo(whip2);

    free(espresso);
    free(mocha1);
    free(mocha2);
    free(whip1);

    free(decaf);
    free(whip2);

    std::cout << "Completed main program!" << std::endl;
    return 0;
}