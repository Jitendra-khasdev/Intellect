#include <iostream>

using namespace std;


int main()
{
    float b, h, a;

    cout << "Enter b and h" << endl;
    cin >> b >> h;

    a = (float) (b * h)/2;

    cout << "Area == " << a;

    return 0;
}