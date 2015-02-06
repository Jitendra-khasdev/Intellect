/*
 *
 * File Name :  oprator.c
 * Developer :  Jitendra kumar khasdev <jkhasdev@gmail.com>
 *              @2015
 * This program is developed only for the educational purposes,
 * you are free to use and modify.
 * Author    :  Jitendra kumar khasdev, Bhopal (INDIA)
 *
 */

#include<stdio.h>

void main(){
	
	int x=1,y=2;
	
	if(--x && --y)
		printf("x=%d y=%d",x,y);
	else
		printf("%d %d",x,y);
}
