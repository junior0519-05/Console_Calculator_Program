#include <iostream>

int main() {

    char op;
    double num1, num2;
    double result;

    std::cout << " -----CALCULATOR-----" << std::endl;

    std::cout << "Enter either (+, -, *, /)" << std::endl;
    std::cin >> op;

    std::cout << "Now enter the first number: " << std::endl;
    std::cin >> num1;

    std::cout << "Now enter the second number: " << std::endl;
    std::cin >> num2;



    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
        std::cout << "Please enter correct operand" << std::endl;
            break;

    }

    std::cout<< "The result is: " << result << std::endl;

    return 0;
}