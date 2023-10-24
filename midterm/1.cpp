#include <iostream>
using namespace std;

int main(void)
{
    int a = 0, b = 0, all = 0;
    cout << "두 개의 정수 입력>> ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "잘못 입력하셨습니다." << endl;
        return 0;
    }
    for (int i=a; i<b+1; i++)
        all += i;
    cout << a << "에서 " << b << "까지 합은 " << all << endl;
}