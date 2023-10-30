#include <iostream>
#include "one.h"
using namespace std;

double Circle:: getArea()
{
    return 3.14 * radius * radius;
}

void Circle:: get(int r)
{
    radius = r;
}

int main(void)
{
    Circle donut;
    donut.get(1);
    double area = donut.getArea();
    cout << area << endl;

    Circle pizza;
    pizza.get(30);
    area = pizza.getArea();
    cout << area << endl;
}