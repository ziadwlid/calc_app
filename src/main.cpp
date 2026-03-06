#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    double a = 0, b = 0;
    char op = '+';
    std::cout << "Hello to calc app\n";
    std::cout << "Enter number operator\n";
    std :: cin >> a >> op >> b;
    switch (op) {
        case '+':
            std::cout << "Addition\n";
            std::cout << calc.add(a,b) << std::endl;
            break;
        case '-':
            std::cout << "Subtraction\n";
            std::cout << calc.sub(a,b) << "\n";
            break;

        case '*':
            std::cout << "Multiplication\n";
            std::cout << calc.mul(a,b) << "\n";
            break;

        case '/':
            std::cout << "Division\n";
            if(b != 0)
                std::cout << calc.div(a,b) << "\n";
            else
                std::cout << "Division by zero\n";
            break;

        default:
            std::cout << "Invalid operator\n";
    }
    return 0;
}