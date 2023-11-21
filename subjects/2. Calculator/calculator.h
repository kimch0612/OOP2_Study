#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>
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
    int factorial(int a)
    {
        int temp = 1;
        for (int i=0; i<a; i++)
            temp += a*i;
    }
    int fact(int a) { return 0; }
};

class calculator : public Adder, public Subtraction, public Multiplication, public Division, public Quotient, public Factorial {
public:
    int a, b;
    string oper;
    int find_operator(calculator cal);
    void set_value(int flag, int a, string oper, int b);
};
#endif