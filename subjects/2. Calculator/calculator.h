#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>
using namespace std;

class Adder {
protected:
    int add(int a, int b) { return a + b; }
};

class Subtraction {
protected:
    int sub(int a, int b) { return a - b; }
};

class Division {
protected:
    int div(int a, int b) { return a / b; }
};

class Quotient {
protected:
    int quot(int a, int b) { return a % b; }
};

class Factorial {
protected:
    int factorial(int a)
    {
        int temp = 1;
        for (int i=0; i<a; i++)
            temp += a*i;
    }
    int fact(int a) { return 0; }
};

class calculator : public Adder, public Subtraction, public Division, public Quotient {
protected:
    string oper;
public:
    void input()
    {
        cout << "계산하고자 하는 술식을 입력해주세요 (ex. 1 + 1, 5 !)\n>> ";
        getline(cin, oper);
    }
    int find_operator(calculator cal);
    string rm_whitespaces(calculator cal);
};
#endif