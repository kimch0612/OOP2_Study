#include "header.h"

string device;
string task;

int main(void)
{
    cout << "사용할 TV: ";
    cin >> device;
    while (1)
    {
        print_screen(device);
        cout << "(도움말은 --help를 입력하세요)" << endl;
        cout << "> ";
        cin >> tmp;
    }
}