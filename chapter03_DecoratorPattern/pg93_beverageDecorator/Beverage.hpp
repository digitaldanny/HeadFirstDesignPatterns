#ifndef IBEVERAGE_HPP
#define IBEVERAGE_HPP

#include <string>
#include <iostream>

using namespace std;

using std::string;

class Beverage
{
private:
    string description;
    float cost;
public:
    // Concrete methods
    // NOTE: Instead of having protected variables, I can limit how derived classes 
    // set them in these implementations. Not important for this example, but this
    // is a good thing to keep in mind for production code.
    void setDescription(string description) { this->description = description; }
    void setCost(float cost) {this->cost = cost; }

    // Virtual methods
    virtual string getDescription() { return this->description; }
    virtual float getCost() { return this->cost; }
};

#endif // IBEVERAGE_HPP