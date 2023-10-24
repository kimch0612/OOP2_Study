#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width=0, height=0;
    int calc(int width, int height);
};

int Rectangle::calc(int width, int height)
{
    return width*height;
}

int main(void)
{
    Rectangle square;
    cout << "너비는 : ";
    cin >> square.width;
    cout << "높이는 : ";
    cin >> square.height;
    cout << "사각형의 면적은 " << square.calc(square.width, square.height) << endl;
}