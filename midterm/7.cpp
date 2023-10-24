#include <iostream>
using namespace std;

class Persion
{
public:
    int money;
    void addMoney(int money) { this->money += money; }
    static int sharedMoney;
    void addShared(int n) { sharedMoney += n; }
};

int Persion:: sharedMoney = 30;

int main(void)
{
    Persion han;
    han.money = 100;
    han.sharedMoney = 200;

    Persion lee;
    lee.money = 150;
    lee.addMoney(200);
    lee.addShared(200);

    cout << han.money << " " << lee.money << endl;
    cout << han.sharedMoney << " " << lee.sharedMoney << endl;
}