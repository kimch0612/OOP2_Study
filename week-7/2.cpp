// 함수의 오버로드 (위임생성자)
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width = 0, height = 0;

public:
    Rectangle();
    Rectangle(int a, int b);
    Rectangle(int a);
    bool isSquare();
};

Rectangle::Rectangle()
{
    width = 1;
    height = 1;
}

Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
}

Rectangle::Rectangle(int a)
{
    width = a;
    height = a;
}

bool Rectangle::isSquare()
{
    if (width == 0)
        return false;
    else if (width == height)
        return true;
    else
        return false;
}

int main(void)
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare())
        cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare())
        cout << "rect2는 정사각형이다." << endl;
    if (rect3.isSquare())
        cout << "rect3는 정사각형이다." << endl;

    return 0;
}
