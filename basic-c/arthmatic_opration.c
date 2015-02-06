/*
 *
 * File Name :	arthmatic_opration.c
 * Developer :	Jitendra kumar khasdev <jkhasdev@gmail.com>
 *		@2015
 * This program is developed only for the educational purposes,
 * you are free to use and modify.
 * Author    :	Jitendra kumar khasdev, Bhopal (INDIA)
 *
 */

#include <stdio.h>


int main()
{
	int num,a,b;
	/*Get the value of variables*/
	printf("Enter for a\n");
	scanf("%d",&a);
	printf("Enter for b\n");
	scanf("%d",&b);

	/*perform arthmatic opration*/
	num=a*a+b*b+2*a*b;
	
	/*display the result of the sum*/
	printf("square of a+b == %d",num);
	return 0;
}
