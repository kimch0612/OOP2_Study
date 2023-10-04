/*내가 그냥 심심해서 끄적인 코드임*/
#include <iostream>
using namespace std;

class Circle
{
public:
    double Radius;

    double Circle_Area()
    {
        return (3.14 * Radius * Radius);
    }
};

int main(int argc, char **argv)
{
    (void) argc;
    Circle Cir1;
    Cir1.Radius = atof(argv[1]);
    cout << "원의 면적은 " << Cir1.Circle_Area() << "입니다." << endl;
}