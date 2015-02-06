#include <stdio.h>

main()
{
int a , b;
a = 10;
b = (a == 1) ? 20: 30;
printf( "Value of b is %d\n", b );
b = (a == 10) ? 20: 30;
printf( "Value of b is %d\n", b );
}
