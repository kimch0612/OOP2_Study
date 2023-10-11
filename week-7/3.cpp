/*
함수의 소멸자

소멸자의 목적? 실행 도중 동적으로 할당 받은 메모리의 해제, 파일 저장 및 닫기, 네트워크 닫기 등..
ex) Circle:: ~Circle(){...}
클래스 하나만 닫아줘도 그 하위 객체들은 자동으로 삭제됨.
삭제 순서는 선입후출과 같은 구조 (나중에 생성된 것이 먼저 해제됨)
*/
#include <iostream>
using namespace std;

int main(void)
{
    
}