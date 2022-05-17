#include <iostream>
#include "Strings.h"

class MilitaryTime
{
public:
	void GetTime(std::string&, bool&) const;
	std::string ConvertInput(std::string&) const;
	void DisplayIntroduction() const;
	void AskForTime() const;
	void AskToContinue() const;
};