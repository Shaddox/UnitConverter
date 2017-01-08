//
// Created by Shaddox on 07.01.2017.
//

#include "utilities.h"
#include "../Converters/lungime.h"
#include "../Converters/arie.h"
#include "../Converters/viteza.h"
#include "../Converters/volum.h"
#include <iostream>


int prettifyAndInteractWithMenu(std::vector<std::string> menuEntries) {
    int option;
    std::cout << "****************Alege o optiune**********************************************\n";
    for (int i = 0; i < menuEntries.size(); i++) {
        std::cout << "\t" << i + 1 << ". " << menuEntries[i] << "\n";
    }
    std::cout << "*****************************************************************************\n";

    std::cin >> option;
    return option;
}

double treatSelectionCase(int mainCode, int subCode) {
    double unit;
    double result = 0;
    std::cout << "\nIntroduceti unitatea care doriti sa o convertiti: \n";
    std::cin >> unit;

    //lungime
    if (mainCode == 1)
        switch (subCode) {
            //meters to yards
            case 1:
                std::cout << unit << " metri";
                convertMetersToYards(unit);
                break;
                //km to miles
            case 2:
                std::cout << unit << " kilometri";
                convertKilometersToMiles(unit);
                break;
            default:
                break;
        }

    if (mainCode == 2)
        switch (subCode) {
            //sqm to acres
            case 1:
                std::cout << unit << " metri patrati";
                squareMeterToAcre(unit);
                break;
            case 2:
                std::cout << unit << " metri patrati";
                squareMeterToSquareFoot(unit);
                break;
            default:
                break;
        }

    if (mainCode == 3)
        switch (subCode) {
            case 1:
                std::cout << unit << " metri cub";
                cubicMeterToUKGalon(unit);
                break;
            case 2:
                std::cout << unit << " metri cub";
                cubicMeterToCubicYard(unit);
                break;

            default:
                break;
        }

    if (mainCode == 4)
        switch (subCode) {
            default:
                break;
        }

    if (mainCode == 5)
        switch (subCode) {
            case 1:
                std::cout << unit << " kilometri pe ora";
                kilometersPerHourToMilesPerHour(unit);
                kilometersPerHourToMetersPerSecond(unit);
                break;
            default:
                break;
        }

    if (mainCode == 6)
        switch (subCode) {
            default:
                break;
        }

    if (mainCode == 7)
        switch (subCode) {
            default:
                break;
        }

    if (mainCode == 8)
        switch (subCode) {
            default:
                break;
        }

    if (mainCode == 9)
        switch (subCode) {
            default:
                break;
        }

    if (mainCode == 10)
        switch (subCode) {
            default:
                break;
        }

    if (mainCode == 11)
        switch (subCode) {
            default:
                break;
        }

    return result;
}