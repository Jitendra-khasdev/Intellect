#include <iostream>
using namespace std;

template <class T>

void swap(T &x, T &y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;

}

int main()
{
    int a, b;

    a = 1, b = 2;

    swap(a, b);

    cout << "a == " << a << " b == "<< b << "\n"; 

    return 0;
}