/*
 *
 * File Name :  global.c
 * Developer :  Jitendra kumar khasdev <jkhasdev@gmail.com>
 *              @2015
 * This program is developed only for the educational purposes,
 * you are free to use and modify.
 * Author    :  Jitendra kumar khasdev, Bhopal (INDIA)
 *
 */

#include<stdio.h>

static num=5;
int num;
extern int num;

int main(){

	printf("%d",num);
	return 0;
}
