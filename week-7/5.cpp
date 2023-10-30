// 일반 생성자와 복사 생성자
#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass();
    MyClass(int);
    MyClass(const MyClass&);
    ~MyClass();
public:
    int get();
private:
    int x;
};

MyClass:: MyClass(){}
MyClass:: MyClass(int _x){x = _x;}
MyClass:: MyClass(const MyClass& _mc) {x = _mc.x;}
MyClass:: ~MyClass(){}

int MyClass::get(){return x;}

int main(void)
{
    MyClass ob1;
    MyClass ob2 = 20;
    MyClass ob3(10);
    MyClass ob4(ob3);
    MyClass ob5 = ob2;

    cout << "ob1 객체 x: " << ob1.get() << endl;
    cout << "ob2 객체 x: " << ob2.get() << endl;
    cout << "ob3 객체 x: " << ob3.get() << endl;
    cout << "ob4 객체 x: " << ob4.get() << endl;
    cout << "ob5 객체 x: " << ob5.get() << endl;
}