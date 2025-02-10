#include <iostream>

// Function to get an integer from the user
int getAnIntFromTheUser(const std::string& prompt) {
    int value;
    std::cout << prompt;
    std::cin >> value;
    return value;
}

// Function to compare two integers and return the larger one
int compareTwoInts(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to sum two integers and return the result
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    // Get two integers from the user
    int num1 = getAnIntFromTheUser("Enter the first integer: ");
    int num2 = getAnIntFromTheUser("Enter the second integer: ");

    // Compare the two integers
    int larger = compareTwoInts(num1, num2);
    std::cout << "The larger integer is: " << larger << std::endl;

    // Sum the two integers
    int sum = sumTwoInts(num1, num2);
    std::cout << "The sum of the two integers is: " << sum << std::endl;

    return 0;
}
