#include <stdio.h>

void main()
{
int i=5,j=10,num;

num=(++i,++j,i+j);

printf("%d %d %d",num,i,j);
}
