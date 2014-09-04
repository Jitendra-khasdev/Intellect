#include <stdio.h>


int main()
{
FILE *fp;
char buff[50],temp;
int i;
fp=fopen("jittu.txt","r");
fprintf(fp,"this is my testing\n");


while(fputc(i,fp) != EOF)
   printf("%c",(char)i);

printf("\n");
printf("Reading from buffer %s\n",buff);
fclose(fp);
return 0;
}
