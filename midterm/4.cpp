#include <iostream>
using namespace std;

class Circle
{
public:
    float radius=0;
    float cal_radius(float radius);
} Cir1;

float Circle::cal_radius(float rarius) { return 3.14 * radius * radius; }

int main(void)
{
    cout << "원의 반지름은? ";
    cin >> Cir1.radius;
    cout << "원의 면적은 " << Cir1.cal_radius(Cir1.radius) << " 입니다." << endl;
}