#include "header.h"

int main(void)
{
    TV tv;
    string device, task;

    cout << "사용할 TV의 제조사: ";
    cin >> device;
    while (1)
    {
        cout << tv.get_status(0) << endl;
        print_screen(tv, device);
        cout << "(도움말은 --help를 입력하세요)" << endl;
        cout << "> ";
        cin >> task;
        task_gate(tv, task);
    }
}