#ifndef __CALCULATOR_HPP
#define __CALCULATOR_HPP

#include <string>

// this function should expect that `expression` has already been
// validated and thus throw no exceptions
double parse_number(const std::string &expression);

// Function to validate if a string represents a valid double
bool validDouble(const std::string& s);

// Function to add two string-represented numbers
std::string addStrings(const std::string& a, const std::string& b);

// Function to load lines from a file
std::vector<std::string> loadLines(const std::string& filename);

#endif // __CALCULATOR_HPP
