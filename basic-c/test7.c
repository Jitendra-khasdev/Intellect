#include <stdio.h>
int main()
{
int a = 10, b = 2;
int *p1, *p2;
char ab[5]="jittu";
p1 = &a;
p2 = &b;
printf("%p %p \n", p1, p2);

printf("%p %p",&a,&b);

printf("%d %d    %d\n", *p1, *p2,sizeof(ab));
return 0;
}
