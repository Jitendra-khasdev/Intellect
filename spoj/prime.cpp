#include <iostream>

using namespace std;

bool is_prime(int num)
{
    int i;

    if (num == 0 || num == 1)
        return false;

    if (num >= 9)
        num = 9;

    for (i = 2; i < num; i++) {
        if (num%i == 0) {
            return false;
        }        
    }
    return true;
}


void print_prime(int a, int b)
{

    int i;

    for (i = a; i <= b; i++) {
        if (is_prime(i))
            cout<<i<<"\n";
    }
}

int main()
{
    int test_num;
    int a, b;

    cin>>test_num;

    while (test_num--) {
        cin>>a>>b;

        print_prime(a, b);

    }
    return 0;
}