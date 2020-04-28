#include <iostream>

using namespace std;

const float PI = 3.14;

int main()
{
    int radius;

    cout << "Enter the radius\n";
    cin >> radius;
    cout << "Area: " << radius*radius*PI;
    return 0;    
}