// Copyright FardUtil Team 2022.
// Entry point for fardutil testing.

#include <iostream>
#include "ReturnVal.h"
#include "MainMenu.h"
#include "QuikMaths.h"
#include "ComnNums.h"
#include "XtraExamples.h"

int main()
{
    // For the main menu.
    FardUtil::MainMenu mm;
    // Using returnvalue for this.
    FardUtil::ReturnVal rval;
    // QuikMaths to do some advanced maths
    FardUtil::MathUniverse::QuikMaths qmath;

    int menuval;
    menuval = mm.InitMainMenu("See more FardUtil", "See yet more FardUtil examples", "Even more FardUtil examples", "Exit");

    if (menuval == 1)
    {
        std::cout << "You chose option 1!\n";
        FardUtil::MainMenu option1submenu1;
        int option1submenu1answer;
        option1submenu1answer = option1submenu1.InitMainMenu("Testmenu 1", "", "", "");
        if (option1submenu1answer == 1)
        {
            std::cout << "Submenu hell sucks.";
            std::cout << qmath.Add3Nums(1, 1, FardUtil::MathUniverse::CommonNumbers::MeaningOfLife / FardUtil::MathUniverse::CommonNumbers::PI);
        }
    }
    else if (menuval == 2 || menuval == 3)
    {
        FardUtil::Examples::Example1();
    }
    else if (menuval == 4)
    {
        return rval.CalculateReturnValueAdvAlg();
    }

    int dummy;
    std::cin >> dummy;
    
    return rval.CalculateReturnValueAdvAlg();
}
