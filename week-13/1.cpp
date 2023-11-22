#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() {
        cout << "소멸자가 처리 되었습니다." << endl;
    }
    virtual void Cry() = 0;
};

class Dog: public Animal {
public:
    virtual void Cry() { cout << "멍멍!" << endl; };
};

class Cat: public Animal {
public:
    virtual void Cry() { cout << "야옹야옹!" << endl; };
};

class Tiger : public Animal {
public:
    virtual void Cry() { cout << "어흥" << endl; };
};

int main(void)
{
    Dog my_dog;
    my_dog.Cry();
    Cat my_cat;
    my_cat.Cry();
    Tiger my_tiger;
    my_tiger.Cry();
}