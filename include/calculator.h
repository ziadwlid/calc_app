#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
    private:
        int number = 0;
        int sum = 0;
        double pi = 3.14159265358979323846;
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
        void area();
        double area_rec(double a, double b);
        double area_sqr(double a);
        double area_circ(double a);
        double area_eclp(double a, double b);

};
#endif