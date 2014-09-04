#include<stdio.h>
int main(){

int class=150;
int public=25;
int private=30;
class = class >> private - public;
printf("%d",class);
return 0;

}
