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

    }

    return 0;
}