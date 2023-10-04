#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width, height;
    int getArea();
};

int Rectangle::getArea()
{
    return width * height;
}

int main(void)
{
    Rectangle rect;
    rect.width = 5;
    rect.height = 7;
    cout << "사각형의 면적은 " << rect.getArea() << endl;
}