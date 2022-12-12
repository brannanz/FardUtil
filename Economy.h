// Copyright FardUtil Team 2022.
#pragma once
#include <string>

namespace FardUtil
{
	namespace Economy
	{
		class Money
		{
		public:
			// the different types
			enum Region
			{
				British = 1,
				Russian = 2,
				Antartic = 3
			};

			int Amount;

			void DefaultValues();

			std::string Name;
		protected:
			float Worth;
			bool Valid = false;
		};

		class Wallet : public Money
		{
			int Age;
			std::string Owner;
		};
	}
}
