#include <iostream>
#include <iomanip> // For setprecision

int main() {
    double num1, num2, product;

    // Input two floating-point numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Multiply the numbers
    product = num1 * num2;

    // Display the result
    // setprecision(2) and fixed show the result with 2 decimal places
    std::cout << "Product = " << std::fixed << std::setprecision(2) << product << std::endl;

    return 0;
}
