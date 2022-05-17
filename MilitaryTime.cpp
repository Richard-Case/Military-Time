#include "MilitaryTime.h"

// TODO: Rewrite this function, to eliminate strange character additions.
void MilitaryTime::GetTime(std::string& input, bool& isAM) const
{
	std::string militaryTime = "";

	if (isAM)
	{
		militaryTime = input.substr(0,2) + ':' + input.substr(2,2);
	}
	else
	{
		switch (input[0])
		{
			case '0':
				militaryTime = "1";
				break;
			case '1':
				militaryTime = "2";
				break;
			default:
				break;
		}

		switch (input[1])
		{
			case '0':
				militaryTime += '2';
				break;
			case '1':
				militaryTime += '3';
				break;
			case '2':
				militaryTime += '4';
				break;
			case '3':
				militaryTime += '5';
				break;
			case '4':
				militaryTime += '6';
				break;
			case '5':
				militaryTime += '7';
				break;
			case '6':
				militaryTime += '8';
				break;
			case '7':
				militaryTime += '9';
				break;
			case '8':
				militaryTime += '0';
				break;
			case '9':
				militaryTime += '1';
				break;
			default:
				break;
		}

		militaryTime += ":" + input.substr(2,2);
	}

	if (militaryTime.substr(0,2) == "12") { militaryTime = "00" + militaryTime.substr(2,3); }
	else if (militaryTime.substr(0,2) == "24") { militaryTime = "12" + militaryTime.substr(2,3); }

	std::cout << U_CLEAR_TERMINAL
		<< militaryTime << std::endl
		<< std::endl
		<< P_CONTINUE;
}

std::string MilitaryTime::ConvertInput (std::string& userInput) const
{
	std::string correctedInput = "";

	for (int index = 0; index < userInput.length(); index++)
	{
		if (int(userInput[index]) < 48 || int(userInput[index]) > 57) { continue; }
		correctedInput += userInput[index];
	}

	if (correctedInput.length() < 4) { correctedInput = '0' + correctedInput; }
	
	for (int index = correctedInput.length() -1; index < 3; index++)
	{
		correctedInput += '0';
	}
		
	return correctedInput;
}

void MilitaryTime::DisplayIntroduction() const
{
	std::cout << U_CLEAR_TERMINAL
		<< P_WELCOME << std::endl
		<< P_INTRO << std::endl
		<< P_BEGIN << std::endl
		<< P_INPUT;
}

void MilitaryTime::AskForTime() const
{
	std::cout << U_CLEAR_TERMINAL
		<< P_TIME << std::endl
		<< P_INPUT;
}

void MilitaryTime::AskToContinue() const
{
	std::cout << U_CLEAR_TERMINAL
		<< P_GO_AGAIN << std::endl
		<< P_INPUT;
}