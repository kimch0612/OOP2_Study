/*내가 그냥 심심해서 끄적인 코드임*/
#include <iostream>
using namespace std;

class Circle
{
    double Radius;
public:
    double Circle_Area()
    {
        void get_Radius(int num);
        return (3.14 * Radius * Radius);
    }
};

void Circle:: get_Radius(int num)
{
    Radius = num;
}

int main(int argc, char **argv)
{
    (void) argc;
    Circle Cir1;
    Cir1.get_Radius(atof(argv[1]));
    cout << "원의 면적은 " << Cir1.Circle_Area() << "입니다." << endl;
}