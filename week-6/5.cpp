#include <iostream>
using namespace std;

class Bmi
{
public:
    int weight;
    int tall;
    double getBMI();
};

double Bmi::getBMI()
{
    return weight / ((tall*tall) / 10000);
}

int main(void)
{
    Bmi bmi;
    bmi.weight = 80;
    bmi.tall = 177;
    cout << "비만도: " << bmi.getBMI() << endl;
}