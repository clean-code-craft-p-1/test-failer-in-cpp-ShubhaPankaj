#pragma once
#include <assert.h>
#include "testWeatherreport.h"
#include <iostream>

void WeatherSpace::testForWeatherReport()
{
    WeatherSpace::TestRainy();
    WeatherSpace::TestHighPrecipitation();
    std::cout << "All is well (maybe)\n";
}
