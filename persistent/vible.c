main()
{
int i=4;
int j=10;
i++;
if (j > 0)
{
/* i defined in 'main' can be seen */
printf("i is %d\n",i);
}
if (j > 0)
{
/* 'i' is defined and so local to this block */
int i=100;
printf("i is %d\n",i);
}/* 'i' (value 100) dies here */
printf("i is %d\n",i); /* 'i' (value 5) is now visable.*/
}
