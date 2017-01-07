#include <iostream>
#include <vector>
#include "utils/utilities.h"

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
            case 1 : subOptions = {"Metri - Yards"}; break;
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

            double result = treatSelectionCase(code, subCode);
            std::cout << "Rezultatul conversiei este: "<<result;
        }

    }

    return 0;
}