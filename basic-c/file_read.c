/*
 *
 * File Name :  file_read.c
 * Developer :  Jitendra kumar khasdev <jkhasdev@gmail.com>
 *              @2015
 * This program is developed only for the educational purposes,
 * you are free to use and modify.
 * Author    :  Jitendra kumar khasdev, Bhopal (INDIA)
 *
 */

#include <stdio.h>

int main()
{
	/*declar a file pointer*/
	FILE *fp=NULL;
	char buff[50],temp;
	int i;

	/*create a file named jittu.txt in read mode*/
	fp=fopen("jittu.txt","r");
	fprintf(fp,"this is my testing\n");


	while(fputc(i,fp) != EOF)
		printf("%c",(char)i);
	printf("\n");

	printf("Reading from buffer %s\n",buff);
	fclose(fp);
	return 0;
}
