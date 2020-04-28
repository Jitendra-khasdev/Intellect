#include <iostream>

using namespace std;

int main()
{

    int a, b;

    a = 3, b = 6;

    swap(a, b);

    cout << "a == " << a << " b == " << b;
}

void swap(int &num1, int &num2)
    
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

}