/*
20102056 김창환 - 객체지향프로그래밍2 기말 대체 과제
빌드 및 실행 방법: Unix 또는 Linux 환경의 Terminal에서 g++ *.cpp && ./a.out 명령어 입력.
*/
#include "calculator.h"

int calculator:: find_operator(calculator cal)
{
    int flag = 0;
    if (cal.oper.find("+") != std::string::npos) flag = 1;
    else if (cal.oper.find("-") != std::string::npos) flag = 2;
    else if (cal.oper.find("x") != std::string::npos) flag = 3;
    else if (cal.oper.find("/") != std::string::npos) flag = 4;
    else if (cal.oper.find("%") != std::string::npos) flag = 5;
    else flag = -1;
    return 0;
}

int main(void)
{
    calculator hand_calculator;
    hand_calculator.input();
}