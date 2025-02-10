#include <iostream>

int main() {
    int num1, num2, num3;

    // Get user input
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    std::cout << "Enter the third integer: ";
    std::cin >> num3;

    int largest;

    // Determine the largest integer using nested if statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }

    // Output the largest integer
    std::cout << "The largest integer is: " << largest << std::endl;

    return 0;
}
