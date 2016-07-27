#include<stdio.h>

char** func_Str1();
char** func_Str2();

int main(void)
{
    char **ptr1 = NULL;
    char **ptr2 = NULL;

    ptr1 = func_Str1();
    printf("\n [%s] address = [%p], its returned address is [%p]\n",*ptr1,(void*)func_Str1,(void*)ptr1);

    ptr2 = func_Str2();
    printf("\n [%s] address = [%p], its returned address is [%p]\n",*ptr2,(void*)func_Str2,(void*)ptr2);

    printf("\n [%s] address = [%p], its returned address is [%p]\n",*ptr1,(void*)func_Str1,(void*)ptr1);
    return 0;
}

char** func_Str1()
{
    char *p = "Linux";
    return &p;
}

char** func_Str2()
{
    char *p = "Windows";
    return &p;
}
