//
// Created by Shaddox on 14.01.2017.
//

#include "temperatura.h"
#include "../Utils/global.h"

void celsiusToFahrenheit(double celsius) {

    std::cout << mesaj << (celsius * (9/5))+32 << " grade Fahrenheit" << std::endl;

}

void celsiusToRankine(double celsius) {

    std::cout << mesaj << (celsius + 273.15)*(9/5) << " grade Rankine" << std::endl;

}
