/*
20102056 김창환 - 객체지향프로그래밍2 기말 대체 과제
빌드 및 실행 방법: Unix 또는 Linux 환경의 Terminal에서 g++ *.cpp && ./a.out [operator] 명령어 입력.
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
    int result;
    calculator hand_calculator;
    switch(argc)
    {
        case 3:
            cout << "n !" << endl; 
            break;
        case 4:
            cout << "n + n" << endl;
            result = hand_calculator.add(hand_calculator.a, hand_calculator.b);
            break;
        default:
            cout << "올바르게 다시 입력하세요.\n입력 예시: g++ *.cpp && ./a.out 1 + 1 \n g++ *.cpp && ./a.out 5 !" << endl; break;
    }
}