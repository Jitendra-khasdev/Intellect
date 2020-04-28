/*
 * Find the sum of n natural number.
 */
#include <iostream>
using namespace std;

int main()
{
    int num, sum;

    cout << "Enter the number" << endl;
    cin >> num;

    sum = (num * (num + 1))/2;

    cout << "sum == " << sum << endl;

    return 0;
}