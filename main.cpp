#include <iostream>
#include <vector>
#include "utils/utilities.h"

//idei
//static const char *options[3] = {
//        "length", "temperature", "exit"
//};
//
//static char const *suboptions[2][2] = {
//        { "kilometer -> mile", "meter -> yard" },
//        { "celsius -> fahrenheit", "celsius -> kelvin" },
//};
//
//static double (*convert[1][1])(double) = {
//        { convertMetersToYards },
//        { celsius_to_fahrenheit, celsius_to_kelvin },
//};

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<std::string> optiuni = {"Lungime", "Arie", "Volum", "Timp", "Viteza", "Temperatura", "Masa", "Energie", "Presiune", "Densitate", "Consum Combustibil", "Exit"};
    int code = 0;
    while (code != optiuni.size())
    {
        code = prettifyAndInteractWithMenu(optiuni);
        std::cout << code;
        std::vector<std::string> subOptions;
        switch(code)
        {
            case 1 : subOptions = {"Metri - Yards", "Kilometri - Mile"}; break;
            case 2 : subOptions = {"Metri Patrati - Acri", "Metri Patrati - Picioare Patrate"}; break;
            case 5 : subOptions = {"Kilometri pe Ora - Mile pe Ora - Metri pe Secunda"};break;
            default: continue;
        }
//        if (code == optiuni.size()) { break;}

        subOptions.insert(subOptions.end(), "Inapoi");
        int subCode = 0;

        while (subCode != subOptions.size())
        {
            subCode = prettifyAndInteractWithMenu(subOptions);
            //mic bugfix pentru faptul ca la inputul maxim deja nu mai are sens...
            if (subCode == subOptions.size()) { continue; }

            treatSelectionCase(code, subCode);
//            std::cout << "Rezultatul conversiei este: "<<result;
        }

    }

    return 0;
}