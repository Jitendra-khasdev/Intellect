#include <iostream>

using namespace std;

int main()
{
    int n = 100;
    int *p = &n;

    int &m = *p;

    cout << "n = " << n << " m = " << m << " *p = " << *p << "\n";
    return 0;
}