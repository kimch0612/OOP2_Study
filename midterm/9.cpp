#include <iostream>
using namespace std;

class Rectangle
{
    int width = 0, height = 0;
public:
    Rectangle();
    Rectangle(int width, int height);
    Rectangle(int width);
    bool isSquare();
};

Rectangle:: Rectangle()
{
    width = 1;
    height = 1;
}

Rectangle:: Rectangle(int width, int height)
{
    this -> width = width;
    this -> height = height;
}

Rectangle:: Rectangle(int width)
{
    this -> width = width;
    this -> height = width;
}

bool Rectangle:: isSquare()
{
    if (width == 0) return false;
    if (width == height) return true;
    else return false;
}

int main(void)
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
    if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}