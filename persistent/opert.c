#include<stdio.h>
void main(){
int x=1,y=2;
if(--x && --y)
printf("x=%d y=%d",x,y);
else
printf("%d %d",x,y);
}
