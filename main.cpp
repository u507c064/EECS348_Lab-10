#include <iostream>
#include "calculator.hpp"

int main() {
    std::string filename;
    std::cout << "Enter the name of the input file: ";
    std::cin >> filename;

    // Load lines from the specified file
    std::vector<std::string> lines = loadLines(filename);
    std::string constant = "-123.456";

    for (const std::string &line : lines) {
        if (validDouble(line)) {
            std::string sum = addStrings(line, constant);
            std::cout << line << " + " << constant << " = " << sum << std::endl;
        } else {
            std::cout << line << " is not a valid double" << std::endl;
        }
    }

    return 0;
}
