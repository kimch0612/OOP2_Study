#include <iostream>
using namespace std;

int bigger(int a, int b)
{
    if (a>b) return a;
    else return b;
}

bool dividedBy3 (int n)
{
    if (n%3==0) return true;
    else return false;
}

int main(void)
{
    int a, b, n;
    cout << "두 개의 정수 입력 >> ";
    cin >> a >> b;
    n = bigger(a, b);
    cout << a << "와 " << b << "중 큰 값은 " << n << "입니다." << endl;
    if (dividedBy3(n))
        cout << n << "은 " << "3의 배수입니다." << endl;
    else
        cout << n << "은 " << "3의 배수가 아닙니다." << endl;
}