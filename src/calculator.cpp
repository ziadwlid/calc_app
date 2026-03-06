#include "calculator.h"
#include <iostream>

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::sub(double a, double b) {
    return a - b;
}

double Calculator::mul(double a, double b) {
    return a * b;
}

double Calculator::div(double a, double b) {
    return a / b;
}

void Calculator::run() {

        double a = 0, b = 0;
        int choice = 0;
        std::cout << "Hello to calc app\n";
        while (true) {
            std::cout << "Calculator Menu:\n";
            std::cout << "1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Quite\n";
            std::cout << "Enter choice : ";
            std::cin >> choice;
            if (choice == 5) {
                std::cout << "Quit\n";
                break;
            }
            std::cout << "Enter a number: ";
            std::cin >> a;
            std::cout << "Enter b number: ";
            std::cin >> b;
            switch (choice) {
                case 1:
                    std::cout << "Addition\n";
                    std::cout << "Result: " << add(a,b) << std::endl;
                    break;
                case 2:
                    std::cout << "Subtraction\n";
                    std::cout << "Result: "<< sub(a,b) << "\n";
                    break;

                case 3:
                    std::cout << "Multiplication\n";
                    std::cout << "Result: " << mul(a,b) << "\n";
                    break;

                case 4:
                    std::cout << "Division\n";
                    if(b != 0)
                        std::cout << "Result: " << div(a,b) << "\n";
                    else
                        std::cout << "Division by zero\n";
                    break;

                default:
                    std::cout << "Invalid operator\n";
            }
            std::cout << "-------------------------------\n";
        }
        std::cout << "Bye :)\n";
    }
