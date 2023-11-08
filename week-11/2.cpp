#include <iostream>
using namespace std;

class A{
public:
    A() { cout << "생성자 A" << endl; }
    A(int x) { cout << "매개변수생성자 A" << x << endl; }
};

class B : public A{
public:
    B() { cout << "생성자 B" << endl; }
    B(int x) { cout << "매개변수생성자 A" << x << endl; }
};

int main(void)
{
    B b;
}