#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Adder {
public:
    int add(int a, int b) { return a + b; }
};

class Subtraction {
public:
    int sub(int a, int b) { return a - b; }
};

class Multiplication {
public:
    int multi(int a, int b) { return a * b; }
};

class Division {
public:
    float div(int a, int b) { return a / b; }
};

class Quotient {
public:
    int quot(int a, int b) { return a % b; }
};

class Factorial {
public:
    int result = 1;
    int factorial(int a)
    {
        for (int i=1; i <= a; i++) result *= i;
        return result;
    }
};

class Power {
public:
    double pow(int a, int b) { return std::pow(a, b); }
};

class calculator : public Adder, public Subtraction, public Multiplication, public Division, public Quotient, public Factorial, public Power {
public:
    int a, b;
    string oper;
    int find_operator(calculator cal);
    void set_value(int flag, int a, string oper, int b);
};
#endif