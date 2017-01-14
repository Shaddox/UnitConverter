//
// Created by Shaddox on 07.01.2017.
//

#include "utilities.h"
#include "../Converters/lungime.h"
#include "../Converters/arie.h"
#include "../Converters/viteza.h"
#include "../Converters/volum.h"
#include "../Converters/timp.h"
#include "../Converters/consum_combustibil.h"
#include "../Converters/densitate.h"
#include "../Converters/energie.h"
#include "../Converters/masa.h"
#include "../Converters/presiune.h"
#include "../Converters/temperatura.h"

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
            // sqm to sqf
            case 2:
                std::cout << unit << " metri patrati";
                squareMeterToSquareFoot(unit);
                break;
            default:
                break;
        }

    if (mainCode == 3)
        switch (subCode) {
            //mc to gallon
            case 1:
                std::cout << unit << " metri cub";
                cubicMeterToUKGalon(unit);
                break;
            //mc to ydc
            case 2:
                std::cout << unit << " metri cub";
                cubicMeterToCubicYard(unit);
                break;

            default:
                break;
        }

    if (mainCode == 4)
        switch (subCode) {
            //secunde - ore
            case 1:
            std::cout << unit << " secunde";
            secondsToHours(unit);
                break;
                //ani - ore
            case 2:
            std::cout << unit << " ani";
                yearsToHours(unit);
                break;
            default:
                break;
        }

    if (mainCode == 5)
        switch (subCode) {
            //kmh - mph - mps
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
            //celsius - fahrenheit
            case 1:
            std::cout << unit << " grade celsius";
                celsiusToFahrenheit(unit);
                break;
                //celsius - rakine
            case 2:
            std::cout << unit << " grade celsius";
                celsiusToRankine(unit);
                break;
            default:
                break;
        }

    if (mainCode == 7)
        switch (subCode) {
            //kg - ounces troy
            case 1:
            std::cout << unit << " kilograme";
                kilogramsToTroyOunces(unit);
                break;
                //kg - funt
            case 2:
            std::cout << unit << " kilograme";
                kilogramsToFunts(unit);
                break;
            default:
                break;
        }

    if (mainCode == 8)
        switch (subCode) {
            //joule - btu
            case 1:
                std::cout << unit << " jouli";
                jouleToBTU(unit);
                break;
                //joule - kcal
            case 2:
            std::cout << unit << " jouli";
                jouleToKilocalories(unit);
                break;
            default:
                break;
        }

    if (mainCode == 9)
        switch (subCode) {
            //bar - psi
            case 1:
            std::cout << unit << " bari";
                barToPsi(unit);
                break;
            default:
                break;
        }

    if (mainCode == 10)
        switch (subCode) {
            // kgmc - gcc
            case 1:
            std::cout << unit << " kilograme pe metru cub";
                kilogramPerCubicMeterToGramPerCubicCentimeter(unit);
                break;
                //kgmc - uncii pe galon uk
            case 2:
            std::cout << unit << " kilograme pe metru cub";
                kilogramPerCubicMeterToOuncePerGallonUK(unit);
                break;
            default:
                break;
        }

    if (mainCode == 11)
        switch (subCode) {
            // l/100km - mile/galon - km/l
            case 1:
            std::cout << unit << " litri pe 100km";
                litresPer100kmToMilesPerGallon(unit);
                litresPer100kmToKmPerLitre(unit);
                break;
            default:
                break;
        }

    return result;
}