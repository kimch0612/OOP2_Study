#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Adder {
public:
    int add(float a, float b) { return a + b; }
};

class Subtraction {
public:
    int sub(float a, float b) { return a - b; }
};

class Multiplication {
public:
    float multi(float a, float b) { return a * b; }
};

class Division {
public:
    float div(float a, float b) { return a / b; }
};

class Quotient {
public:
    float quot(int a, int b) { return a % b; }
};

class Factorial {
public:
    int result = 1;
    double factorial(int a)
    {
        for (int i=1; i <= a; i++) result *= i;
        return result;
    }
};

class Power {
public:
    double pow(float a, float b) { return std::pow(a, b); }
};

class Logarithm {
public:
    double logarithm(float a, float b) { return std::log(b) / std::log(a); }
};

class Sine {
public:
    double sine (int a) { return std::sin(a); }
};

class Cosine {
public:
    double cosine (int a) { return std::cos(a); }
};

class Tangent {
public:
    double tangent (int a) { return std::tan(a); }
};

class Arscine {
public:
    double arscine (int a) { return std::asin(a); }
};

class Arccosine {
public:
    double arccosine (int a) { return std::acos(a); }
};

class Arctangent {
public:
    double arctangent (int a) { return std::atan(a); }
};

class SquareRoot {
public:
    double squareroot(int a) { return std::sqrt(a); }
};

class calculator : public Adder, public Subtraction, public Multiplication, public Division, public Quotient, public Factorial, public Power, public Logarithm, public Sine, public Cosine, public Tangent, public Arscine, public Arccosine, public Arctangent, public SquareRoot {
public:
    float a, b;
    string oper;
    int find_operator(calculator cal);
    void set_value(int flag, int a, string oper, int b);
};
#endif