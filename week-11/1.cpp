#include <iostream>
#include <string>
using namespace std;

class Point{
protected:
    int x, y;
public:
    void set(int x, int y);
    void showPoint();
};

void Point:: set(int x, int y)
{
    this-> x = x;
    this-> y = y;
}

void Point:: showPoint()
{
    cout << "(" << x << "," << y << ") " << endl;
}

class ColorPoint: public Point{
    string color;
public:
    void setColor(string color);
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint:: setColor(string color){

}

int main(void)
{
    return 0;
}