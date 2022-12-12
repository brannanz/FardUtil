// Copyright FardUtil Team 2022.
#include "MainMenu.h"

// Function to initialise a main menu with options, max 4 options
int FardUtil::MainMenu::InitMainMenu(std::string Option1, std::string Option2, std::string Option3, std::string Option4)
{
	int choice;

	std::cout << "1: " + Option1 + "\n" + "2: " + Option2 + "\n" + "3: " + Option3 + "\n" + "4: " + Option4 + "\n" + "Please pick one.\n";
	std::cin >> choice;

	return choice;
}
