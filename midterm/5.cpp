#include <iostream>
using namespace std;

int adder(int a, int b) { return a + b; }

int main(void)
{
    int n = adder(24567, 98374);
    cout << "24567과 98374의 합은 " << n << "입니다." << endl;
    
    int a, b;
    cout << "두개?>> ";
    cin >> a >> b;
    n = adder(a, b);
    cout << a << "와 " << b << "의 합은 " << n << "입니다." << endl;
}