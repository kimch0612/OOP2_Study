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
    else if (cal.oper.find("!") != std::string::npos) flag = 6;
    else flag = -1;
    return flag;
}

void calculator:: set_value(int flag, int a, string oper, int b)
{
    switch(flag)
    {
        case 0:
            this -> a = a;
            this -> oper = oper;
            this -> b = b;
            break;
        case 1:
            this -> a = a;
            this -> oper = oper;
            break;
    }
}

int main(int argc, char **argv)
{
    calculator hand_calculator;
    switch(argc)
    {
        case 3:
            cout << "n !" << endl; break;
        case 4:
            cout << "n + n" << endl; break;
        default:
            cout << "올바르게 다시 입력하세요." << endl; break;
    }
    // while (1)
    // {
    //     hand_calculator.input();
    //     cout << "현재 입력한 작업은 ";
    //     switch(hand_calculator.find_operator(hand_calculator))
    //     {
    //         case 1:
    //             cout << "덧셈입니다." << endl; break;
    //         case 2:
    //             cout << "뺄셈입니다." << endl; break;
    //         case 3:
    //             cout << "곱셈입니다." << endl; break;
    //         case 4:
    //             cout << "나눗셈입니다." << endl; break;
    //         case 5:
    //             cout << "몫입니다." << endl; break;
    //         case 6:
    //             cout << "팩토리얼입니다." << endl; break;
    //         default:
    //             cout << "아무런 작업도 아닙니다." << endl; break;
    //     }
    // }
}