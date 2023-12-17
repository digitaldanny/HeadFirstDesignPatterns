#include "Observers.hpp"
#include "Subjects.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    CurrentConditionsDisplay currentConditionsDisplay;
    StatisticsDisplay statisticsDisplay;

    cout << "Running main program!" << endl;

    currentConditionsDisplay.update();
    statisticsDisplay.update();
}