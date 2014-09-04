#include <stdio.h>
void firstFunction(int );
void secondFunction(int );

int main(int argc, char *argv[])
{
        int a = 10;
        int *b = &a;
        firstFunction(a);
        return 0;
}

void firstFunction(int a)
{
        a += 10;
        sleep(1);
        secondFunction(a);
        return;
}

void secondFunction(int b)
{
        sleep(5);
        printf("final value : %d\n", b);
        return;
}
