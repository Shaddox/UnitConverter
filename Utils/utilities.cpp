//
// Created by Shaddox on 07.01.2017.
//

#include "utilities.h"
#include <iostream>


int prettifyAndInteractWithMenu(std::vector<std::string> menuEntries)
{
    int option;
    std::cout << "****************Alege o optiune**********************************************\n";
    for (int i = 0; i < menuEntries.size(); i++)
    {
        std::cout << "\t" << i+1 << ". " <<menuEntries[i] << "\n";
    }
    std::cout << "*****************************************************************************\n";

    std::cin >> option;
    return option;
}
