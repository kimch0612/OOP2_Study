#include "header.h"

int main(void)
{
    TV tv;
    string device, task, notice;

    std::system("clear");
    cout << "사용할 TV의 제조사: ";
    cin >> device;
    while (1)
    {
        if (notice != "\0")
            cout << notice << endl;
        print_screen(tv, device);
        cout << "(도움말은 --help를 입력하세요)" << endl;
        cout << "> ";
        cin >> task;
        task_gate(tv, task, notice);
    }
}