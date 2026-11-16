
#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 + num2;
            break;

        case '-':
            std::cout << "Result: " << num1 - num2;
            break;

        case '*':
            std::cout << "Result: " << num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2;
            } else {
                std::cout << "Error: Cannot divide by zero.";
            }
            break;

        default:
            std::cout << "Invalid operator.";
    }

    std::cout << '\n';
    return 0;
}
