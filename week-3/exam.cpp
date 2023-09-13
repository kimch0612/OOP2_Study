#include <iostream>

using namespace std;
int main(void)
{
    int score, div;

    cout << "점수를 입력하세요>> ";
    cin >> score;
    if(score > 100 || score < 0)
    {
        cout << "잘못된 점수입니다.";
        return 0;
    }
    div = score / 10;
    switch(div)
    {
        case 10:
        case 9: cout << "A입니다."; break;
        case 8: cout << "B입니다."; break;
        case 7: cout << "C입니다."; break;
        case 6: cout << "D입니다."; break;
        default: "F입니다."; break;
    }
}