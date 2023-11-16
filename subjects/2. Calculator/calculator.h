#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>
using namespace std;
class Adder {
protected:
    int add(int a, int b) { return a + b; }
}
class Subtraction {
protected:
    int sub(int a, int b) { return a - b; }
}
class Division {
protected:
    int div(int a, int b) { return a / b; }
}
class Quotient {
protected:
    int quot(int a, int b) { return a % b; }
}
class calculator : public Adder, public Subtraction {
    void input()
    {
        cout << "계산하고자 하는 술식을 입력해주세요 (ex. 1 + 1)\n>> ";
        cin >> first >> operator >> second;
    }
protected:
    int first, second;
    string operator;
public:
};
#endif