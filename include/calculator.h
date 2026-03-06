#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
    private:
        int number = 0;
        int sum = 0;
    public:
        double add(double a, double b);
        double sub(double a, double b);
        double mul(double a, double b);
        double div(double a, double b);
        void run ();
        void intro();
        int choose();
        void calculator();
        void mathmatic();

};
#endif