// Copyright FardUtil Team 2022.
#pragma once
#include <iostream>

namespace FardUtil
{
	class MainMenu
	{
	public:
		// Function to initialise a main menu with options, max 4 options. Returns an int from 1 to four
		int InitMainMenu(std::string Option1, std::string Option2, std::string Option3, std::string Option4);
	};
}
