#include "MilitaryTime.h"

int main()
{
	MilitaryTime militaryTime;
	std::string userInput = "";
	bool isAM = false;
	bool run = true;
	bool validInput = true;

	militaryTime.DisplayIntroduction();

	// TODO: Convert 12am and not 12pm. (Currently does the opposite.)
	do
	{
		getline(std::cin, userInput);
		
		if (toupper(userInput[0]) == 'Y' )
		{
			// Get time from user...
			militaryTime.AskForTime();

			std::string correctedInput = "";
			do
			{
				getline(std::cin, userInput);

				if (toupper(userInput[userInput.length()-2]) == 'A') { isAM = true; }
				else { isAM = false; }

				// Convert input to HHMM
				correctedInput = militaryTime.ConvertInput(userInput);

				if ((int(correctedInput[0]) > 48) && (int(correctedInput[1] > 50)))
				{
					validInput = false;

					std::cout << A_ERROR << A_INVALID_INPUT << std::endl
						<< P_TRY_AGAIN << std::endl
						<< P_INPUT;
				}
				else { validInput = true; }
			} while (!validInput);

			// Display the time as military time...
			militaryTime.GetTime(correctedInput, isAM);
			getline(std::cin, userInput);

			militaryTime.AskToContinue();
		}
		else
		{
			run = false;
		}
	} while (run);

	std::cout << U_CLEAR_TERMINAL
		<< P_EXIT << std::endl
		<< P_CONTINUE;
	getline(std::cin, userInput);

	std::cout << U_CLEAR_TERMINAL;

	return 0;
}