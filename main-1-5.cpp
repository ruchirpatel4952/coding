#include <iostream>

// Function declaration
int count_evens(int number);

int main() {
    // Test cases
    int number1 = 10;
    int evens1 = count_evens(number1);
    std::cout << "Number of even numbers between 1 and " << number1 << ": " << evens1 << std::endl;

    int number2 = 20;
    int evens2 = count_evens(number2);
    std::cout << "Number of even numbers between 1 and " << number2 << ": " << evens2 << std::endl;

    int number3 = 5;
    int evens3 = count_evens(number3);
    std::cout << "Number of even numbers between 1 and " << number3 << ": " << evens3 << std::endl;

    int number4 = 0;
    int evens4 = count_evens(number4);
    std::cout << "Number of even numbers between 1 and " << number4 << ": " << evens4 << std::endl;

    int number5 = -10;
    int evens5 = count_evens(number5);
    std::cout << "Number of even numbers between 1 and " << number5 << ": " << evens5 << std::endl;

    return 0;
}
