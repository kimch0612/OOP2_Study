#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    auto love = [](string a, string b) {
        cout << a << "보다 " << b << "가 좋아" << endl;
    };
    love("돈", "너");
    love("냉면", "소고기");
}