#include <iostream>

using namespace std;

int addArray(int a[], int size);
void makeDouble(int a[], int size);
void printArray(int a[], int size);

int main(void)
{
    int n[] = {1, 2, 3, 4, 5};
    int sum = addArray(n, 5);

    cout << "배열 n의 합은 " << sum << "입니다.\n" <<endl;
    makeDouble(n, 5);
    printArray(n, 5);
}