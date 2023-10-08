/*
컴퓨터소프트웨어학과 2학년 20102056 김창환

/// 개발환경 ///
OS: Ubuntu 20.04.6
IDE: VSCode
Compiler: G++ 9.4.0

/// 제출 파일 ///
controller.cpp
functions.cpp
print_console.cpp
header.h

/// 빌드 및 실행 방법 ///
terminal 창에서 "g++ *.cpp && ./a.out" 입력
*/

#include "header.h"

int main(void)
{
    TV tv; // TV클래스 객체tv를 선언합니다.

    /*이 프로그램을 구동하면서 사용할 세개의 string을 선언합니다. 각각의 활용 용도는 다음과 같습니다.
    device: 컨트롤 할 TV의 기기명을 저장합니다.
    task: 조작할 기능을 저장합니다.
    notice: functions.cpp 파일 내에 있는 task_gate() 함수에서 받아온 메세지를 저장하고 출력합니다.*/
    string device, task, notice;

    std::system("clear"); // Terminal을 clear해서 내가 원하는 정보만 출력되게 합니다.
    cout << "사용할 TV의 제조사: ";
    cin >> device;
    while (1)
    {
        if (notice != "\0")
            cout << notice << endl; // notice가 Null이 아니면 (task_gate로부터 무언가를 받아왔다면) 문자열을 출력합니다.
        print_screen(tv, device); // 리모컨 모양의 글자들을 출력합니다.
        cout << "(도움말은 --help를 입력하세요)" << endl;
        cout << "> ";
        cin >> task; // 사용자로부터 실행할 작업을 입력받습니다.
        task_gate(tv, task, notice); // 입력받은 작업을 실행합니다.
    }
}