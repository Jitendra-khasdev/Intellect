#include <stdio.h>

char *fuc(void);

int main()
{
char *ptr;
ptr=fuc();

printf("%s",ptr);

return 0;
}

char *fuc(void){

static char Text2[10]="martin";

return(Text2);
}
