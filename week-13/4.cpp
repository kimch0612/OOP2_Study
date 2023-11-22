#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
    ofstream fout;

    fout.open("test.txt");
    fout << "C++ Programming!!";
    cout << "파일이 생성되었습니다!" << endl;
    fout.close();
}