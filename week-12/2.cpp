#include <iostream>
using namespace std;

class Graphic{
public:
    virtual void Draw() = 0;
};

class Line: public Graphic{
public:
    virtual void Draw() { cout << "선을 그립니다!" << endl; }
};

class Circle: public Graphic{
public:
    virtual void Draw() { puts("원을 그립니다!!");}
};

class Rect: public Graphic{
public:
virtual void Draw() {puts("사각형을 그립니다!!");}
};

int main(void)
{
    Graphic *pG[3];

    pG[0] = new Line;
    pG[1] = new Circle;
    pG[2] = new Rect;

    for (int i=0; i<3; i++)
        pG[i]->Draw();

    for (int i=0; i<3; i++)
        delete pG[i];
}