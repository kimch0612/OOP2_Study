#include <iostream>
using namespace std;

class Circle
{
    int radius;
public:
    Circle();
    ~Circle() {};
    void setRadius(int r) {radius = r;}
    double getArea() {return 3.14 * radius * radius;}
};

Circle:: Circle()
{
    radius = 1;
}

int main(void)
{
    int n, radius, num = 0;
    cout << "생성하고자 하는 원의 개수?: ";
    cin >> n;

    Circle* pArray = new Circle[n];

    for (int i = 0; i < n; i++)
    {
        cout << "원" << i << ": ";
        cin >> radius;
        pArray[i].setRadius(radius);
    }

    for (int i = 0; i < n; i++)
    {
        cout << pArray[i].getArea() << " ";
    }

    cout << "\n면적이 100에서 200 사이인 원의 개수는 ";

    for (int i = 0; i < n; i++)
    {
        if (pArray[i].getArea() >= 100 && pArray[i].getArea() <= 200)
            num++;
    }
    cout << num << endl;

    delete [] pArray;
}