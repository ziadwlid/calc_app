#include "calculator.h"
#include "../include/calculator.h"
#include <iostream>


void Calculator::intro() {
    std::cout << "Hello budy welcome to calc app\n" << "You can make many calculations here\n";
}
int Calculator::choose() {
    int input = 0;
    while (true) {
        std::cout << "Calculator Menu:\n";
        std::cout << "1) mathmatic\n2) Area\n3) Volume\n4) other\n5) Quite\n";
        std::cout << "Enter choice : ";
        std::cin >> input;
        if (input>=1 && input<=5) {
            return input;
        }
        std::cout << "Wrong input. Please try again.\n";

    }
}
double Calculator::add(double a, double b) {
    return (a + b);
}

double Calculator::sub(double a, double b) {
    return (a - b);
}

double Calculator::mul(double a, double b) {
    return (a * b);
}

double Calculator::div(double a, double b) {
    if (b == 0) {
        std::cout << "Division by zero!\n";
        return -1;
    }
    else {
        return (a / b);
    }
}

void Calculator::mathmatic() {
    double a {0}, b {0};
    char op;
    int in;
    while (true) {
        std::cout << "Choose: \n" << "1) make operation\n" <<  "2) quite\n";
        std::cout << "Enter choice : ";
        std::cin >> in;
        if (in == 2) {
            std::cout << "Thanks for using calculator!\n";
            break;
        }
        else if (in < 1 || in > 2) {
            std::cout << "Wrong input. Please try again.\n";
        }
        else if (in == 1) {
            std::cout << "Enter expression\n";
            std::cin >> a >> op >> b;
            switch (op) {
                case '+':
                    std::cout << "-----------\n";
                    std::cout << "Result add: " << add(a, b) << "\n";
                    std::cout << "-----------\n";
                    break;
                case '-':
                    std::cout << "-----------\n";
                    std::cout << "Result sub: " <<sub(a,b) << "\n";
                    std::cout << "-----------\n";
                    break;
                case '*':
                    std::cout << "-----------\n";
                    std::cout << "Result mul: " <<mul(a,b) << "\n";
                    std::cout << "-----------\n";
                    break;
                case '/':
                    std::cout << "-----------\n";
                    std::cout << "Result div: " << div(a,b) << "\n";
                    std::cout << "-----------\n";
                    break;
                default:
                    std::cout << "-----------\n";
                    std::cout << "Invalid operator.\n";
            }
        }

    }
}

double Calculator::area_rec(double a, double b) {
    return (a * b);
}

double Calculator::area_sqr(double a) {
    return (a * a);
}

double Calculator::area_circ(double a) {
    return (a * a * pi);
}

double Calculator::area_eclp(double a, double b) {
    return (a * b * pi);
}

void Calculator::area() {
    double a {0}, b {0};
    int in {0};
    while (true) {
        std::cout << "Choose: \n" << "1) Rectangle\n" <<  "2) Square\n"
        <<  "3) Circle\n" <<  "4) Ellipse\n" <<  "5) Quit\n";
        std::cout << "Enter choice : ";
        std::cin >> in;
        if (in == 5) {
            std::cout << "Thanks for using area calculator!\n";
            break;
        }
        else if (in < 1 || in > 5) {
            std::cout << "Wrong input. Please try again.\n";
        }
        else {
            switch (in) {
                case 1:
                    std::cout << "Enter rectangle width: ";
                    std::cin >> a;
                    std::cout << "Enter rectangle height: ";
                    std::cin >> b;
                    std::cout << "------------\n";
                    std::cout << "Area of rectangle: " << area_rec(a, b) << "\n";
                    std::cout << "------------\n";
                    break;
                case 2:
                    std::cout << "Enter square width: ";
                    std::cin >> a;
                    std::cout << "------------\n";
                    std::cout << "Area of square: " << area_sqr(a) << "\n";
                    std::cout << "------------\n";
                    break;
                case 3:
                    std::cout << "Enter circle redius: ";
                    std::cin >> a;
                    std::cout << "------------\n";
                    std::cout << "Area of circle: " << area_circ(a) << "\n";
                    std::cout << "------------\n";
                    break;
                case 4:
                    std::cout << "Enter ellipse redius 1: ";
                    std::cin >> a;
                    std::cout << "Enter ellipse redius 2: ";
                    std::cin >> b;
                    std::cout << "------------\n";
                    std::cout << "Area of ellipse: " << area_eclp(a, b) << "\n";
                    std::cout << "------------\n";
                    break;
                default:
                    std::cout << "Invalid choice.\n";
                    break;
            }
        }
    }
}

void Calculator::calculator() {
    while (true) {
        int choice = choose();
        if (choice == 5) {
            std::cout << "Bye :)\n";
            break;
        }
        switch (choice) {
            case 1:
                mathmatic();
                break;
            case 2:
                area();
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    }
}


void Calculator::run() {
    intro();
    calculator();
}
