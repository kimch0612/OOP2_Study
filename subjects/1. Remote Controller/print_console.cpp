#include "header.h"

/* 모델명을 출력할 라인의 공백을 관리하는 함수입니다.
이 함수를 사용하는 이유는 device의 이름의 자릿수가 달라지는 것에 대비해 출력의 규격을 맞추기 위해서입니다.*/
void title_whitespace(string device)
{
    string title("Device name: ");
    cout << '-';
    int i, size;
    size = 24 - device.size(); // 출력할 라인의 공백의 수를 계산합니다.
    for (i=0; i <= 37 - (title.size() + device.size()); i++) // 양옆의 '-'를 제외하고 총 37자의 문자를 출력합니다.
    {
        if (i <= size/2 - 1 || i >= size/2 + 1) cout << " "; // 중간보다 앞쪽이나 뒷쪽의 자리엔 공백을 출력합니다.
        else cout << title << device; // 중간에 title과 device 문자열을 출력합니다.
    }
    cout << '-' << endl;
}

void status_whitespace(TV tv, int flag) // 위와 마찬가지로 6, 11번째 라인을 출력하기 위한 함수입니다.
{
    cout << '-';
    int i, size, flags = 0;
    string tmp, tmp1, tmp2;
    switch(flag)
    {
        case 0: // case가 0인경우 6번 라인에 On, Off를 출력합니다.
            if (tv.get_status(0) == 1) tmp = "On";
            else tmp = "Off";
            size = 37 - tmp.size();
            for (i=0; i <= 37 - tmp.size(); i++)
            {
                if (i <= size/2 - 1 || i >= size/2 + 1) cout << " ";
                else cout << tmp;
            }
            break;
        case 1: // case가 1인경우 11번 라인에 채널과 볼륨값을 출력합니다.
            tmp1 = to_string(tv.get_status(1)); // int형은 문자열의 길이를 측정하는데 번거로우므로 string 타입으로 casting 후 저장해둡니다.
            tmp2 = to_string(tv.get_status(2));
            if (tmp1.size() == 1 && tmp2.size() == 1)
                cout << "    " << tmp1 << "             M             " << tmp2 << "    ";
            else if (tmp1.size() == 2 && tmp2.size() == 1)
                cout << "   " << tmp1 << "             M             " << tmp2 << "    ";
            else if (tmp1.size() == 2 && tmp2.size() == 2)
                cout << "   " << tmp1 << "             M             " << tmp2 << "   ";
            else if (tmp1.size() == 2 && tmp2.size() == 3)
                cout << "   " << tmp1 << "             M            " << tmp2 << "   ";
            else if (tmp1.size() == 3 && tmp2.size() == 1)
                cout << "   " << tmp1 << "            M             " << tmp2 << "    ";
            else if (tmp1.size() == 3 && tmp2.size() == 2)
                cout << "   " << tmp1 << "            M             " << tmp2 << "    ";
            else if (tmp1.size() == 3 && tmp2.size() == 3)
                cout << "   " << tmp1 << "            M            " << tmp2 << "   ";
            else if (tmp1.size() == 1 && tmp2.size() == 2)
                cout << "    " << tmp1 << "             M             " << tmp2 << "   ";
            else if (tmp1.size() == 1 && tmp2.size() == 3)
                cout << "    " << tmp1 << "             M            " << tmp2 << "   ";
            break;
    }
    cout << '-' << endl;
}

void print_screen(TV tv, string device)
{
    cout << "---------------------------------------" << endl;
    cout << "-          Remote Controller          -" << endl;
    title_whitespace(device);
    cout << "-                                     -" << endl;
    cout << "-                  P                  -" << endl;
    status_whitespace(tv, 0);
    cout << "-                                     -" << endl;
    cout << "-    C                           V    -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    ↑                           ↑    -" << endl;
    status_whitespace(tv, 1);
    cout << "-    ↓                           ↓    -" << endl;
    cout << "-                                     -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    1             2              3   -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    4             5              6   -" << endl;
    cout << "-                                     -" << endl;
    cout << "-    7             8              9   -" << endl;
    cout << "-                                     -" << endl;
    cout << "-                  0                  -" << endl;
    cout << "-                                     -" << endl;
    cout << "---------------------------------------" << endl;
}