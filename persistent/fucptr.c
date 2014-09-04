#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
 
int add(int var1, int var2)
{
    return var1 + var2;
}
 
int sub(int var1, int var2)
{
        return var1 - var2;
}
 
int mul(int var1, int var2)
{
        return var1 * var2;
}
 
int div(int var1, int var2)
{
        return var1 / var2;
}
 
int main(int argc, char **argv)
{
        int (*fun_table[4]) ();
        int result = 0, var1 = 0, var2 = 0, choice = 0;
        fun_table[0] = add;
        fun_table[1] = sub;
        fun_table[2] = mul;
        fun_table[3] = div;
        printf("\nSelect : 1.add 2.sub 3.mul 4.div\n\n");
        printf("Enter your choice : ");
                scanf("%d", &choice);
                if(choice <= 4){
                        printf("\nEnter the first variable  : ");
                        scanf("%d", &var1);
                        printf("Enter the second variable : ");
                        scanf("%d", &var2);
                
                        result = (*fun_table[choice-1])(var1, var2);
                        printf("\nResult = %d\n\n", result);
                }
                else
                        printf("\nInvalid choice\n\n");
        return 0;
}
