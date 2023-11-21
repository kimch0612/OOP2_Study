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
    string err = "올바르게 다시 입력하세요.\n입력 예시: g++ *.cpp && ./a.out 1 + 1 \n g++ *.cpp && ./a.out 5 !\n사용 가능한 술식: + - x / % !";
    calculator hc;
    switch(argc)
    {
        case 3:
            hc.set_value(1, stoi(argv[1]), argv[2], 0);
            cout << hc.a << hc.oper << "=";
            break;
        case 4:
            hc.set_value(0, stoi(argv[1]), argv[2], stoi(argv[3]));
            cout << hc.a << hc.oper << hc.b << "=";
            break;
        default:
            cout << err << endl; return 0;
    }
    switch (hc.find_operator(hc))
    {
        case 1:
            cout << hc.add(hc.a, hc.b) << endl; break;
        case 2:
            cout << hc.sub(hc.a, hc.b) << endl; break;
        case 3:
            cout << hc.multi(hc.a, hc.b) << endl; break;
        case 4:
            if (hc.b == 0) cout << "Unable to calculate (Division Err)" << endl;
            else cout << hc.div(hc.a, hc.b) << endl;
            break;
        case 5:
            cout << hc.quot(hc.a, hc.b) << endl; break;
        case 6:
            cout << hc.factorial(hc.a) << endl; break;
        default:
            cout << err << endl; return 0;
    }
}