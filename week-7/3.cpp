/*
함수의 소멸자

소멸자의 목적? 실행 도중 동적으로 할당 받은 메모리의 해제, 파일 저장 및 닫기, 네트워크 닫기 등..
ex) Circle:: ~Circle(){...}
클래스 하나만 닫아줘도 그 하위 객체들은 자동으로 삭제됨.
삭제 순서는 선입후출과 같은 구조 (나중에 생성된 것이 먼저 해제됨)
촬영한 사진 참고.
*/
#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle:: Circle()
{
    radius = 1;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle:: Circle(int r)
{
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle:: ~Circle()
{
    cout << "반지름 " << radius << "원 소멸" << endl;
}

double Circle:: getArea()
{
    return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f()
{
    Circle fDonut(100);
    Circle fPizza(200);
}

int main(void)
{
    Circle mainDonut();
    Circle mainPizza(30);
    f();
}