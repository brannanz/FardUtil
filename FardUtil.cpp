// Copyright FardUtil Team 2022.
// Entry point for fardutil testing.

#include <iostream>
#include "ReturnVal.h"
#include "MainMenu.h"

int main()
{
    // For the main menu.
    FardUtil::MainMenu mm;
    // Using returnvalue for this.
    FardUtil::ReturnVal rval;

    int menuval;
    menuval = mm.InitMainMenu("See more FardUtil", "See yet more FardUtil examples", "Even more FardUtil examples", "Exit");

    if (menuval == 1)
    {
        std::cout << "You chose an option!";
    }
    else if (menuval == 1 || menuval == 2)
    {
        std::cout << "Unimplemented.";
    }
    else if (menuval == 3)
    {
        return rval.CalculateReturnValueAdvAlg();
    }
    
    return rval.CalculateReturnValueAdvAlg();
}
