#include <iostream>
using namespace std;

int main(void)
{
    int div = 0, grade = 0;
    cout << "점수를 입력하세요>> ";
    cin >> grade;
    if (grade > 100 || grade < 0)
    {
        cout << "잘못된 점수입니다" <<  endl;
        return 0;
    }
    div = grade / 10;
    switch(div)
    {
        case 10:
        case 9:
            cout << "A입니다." << endl; break;
        case 8:
            cout << "B입니다." << endl; break;
        case 7:
            cout << "C입니다." << endl; break;
        case 6:
            cout << "D입니다." << endl; break;
        default:
            cout << "F 입니다." << endl; break;
    }
}