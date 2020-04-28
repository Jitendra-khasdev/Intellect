#include <iostream>

using namespace std;

int main()
{
    string str1;

    int a, b;

    cout << "Enter your numbers a and b\n";
    cin >> a >> b;

    cout << "Sum == " << (a + b) << endl; 

    cout << "May I know your name";
    getline(cin, str1);

    cout << "your name is " << str1;

    return 0;
}