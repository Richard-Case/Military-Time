#ifndef STRINGS_H
#define STRINGS_H

#include <string>

// ALERTS
const std::string A_ERROR = "ERROR: ";
const std::string A_WARNING = "WARNING: ";

const std::string A_INVALID_INPUT = "INPUT INVALID.";


// PROMPTS...
const std::string P_BEGIN = "Would you like to start converting times? (Y/N)";
const std::string P_CONTINUE = "Press ENTER to continue...";
const std::string P_EXIT = "Exiting program.";
const std::string P_GO_AGAIN = "Would you like to convert another time? (Y/N)";
const std::string P_TIME = "Please enter the 12-hour time you wish to convert to 24-hour.";
const std::string P_INPUT = "INPUT: ";
const std::string P_INTRO = "This application converts standard 12-hour time into 24-hour time.";
const std::string P_TRY_AGAIN ="Please try again.";
const std::string P_WELCOME = "Welcome to Military Time Converter!";


// IOStream Utilities...
const std::string U_CLEAR_TERMINAL = "\033[2J\033[1;1H";	// Clears the LINUX terminal.

#endif
