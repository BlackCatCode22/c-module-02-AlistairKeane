#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Get user input
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Reverse the string
    std::reverse(input.begin(), input.end());

    // Display the reversed string
    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}
