#include <iostream>
#include "one.h"
using namespace std;

double Circle:: getArea()
{
    return 3.14 * radius * radius;
}

int main(void)
{
    Circle donut;
    donut.radius = 1;
    double area = donut.getArea();
    cout << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << area << endl;
}