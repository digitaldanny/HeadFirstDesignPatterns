#include "Observers.hpp"
#include <iostream>

using std::cout;
using std::endl;

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                  CURRENT CONDITIONS DISPLAY
+-----+-----+-----s+-----+-----+-----+-----+-----+-----+-----+-----+
*/

void CurrentConditionsDisplay::update()
{
    cout << "CurrentConditionsDisplay::update" << endl;
}

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                     STATISTICS DISPLAY
+-----+-----+-----s+-----+-----+-----+-----+-----+-----+-----+-----+
*/

void StatisticsDisplay::update()
{
    cout << "StatisticsDisplay::update" << endl;
}