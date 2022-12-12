// Copyright FardUtil Team 2022.
#pragma once
#include "Economy.h"
#include <iostream>

namespace FardUtil
{
	namespace Examples
	{
		void Example1()
		{
			FardUtil::Economy::Wallet wallet1;
			// Probably unneeded.
			wallet1.DefaultValues();
			wallet1.Name = "Example Wallet";
			wallet1.Amount = wallet1.Amount++;
			std::cout << "FardUtil Economy Sim Wallet info:\n Name:" + wallet1.Name + "\n";
			std::cout << wallet1.Amount;
		}
	}
}
