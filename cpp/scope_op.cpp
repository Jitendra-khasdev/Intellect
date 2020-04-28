#include <iostream>

using namespace std;

int num = 20;

int main()
{
    int num;

    num = 10;
    cout << num << "\n";
    cout << ::num << "\n";
    return 0;
}