#include <stdio.h>


int hello(int num)
{

	printf("Hello world from %d\n", num);
}

struct test {
	int (*fun1)(int);
	int a;

};

int main()
{
	struct test node = {
		.fun1 = hello,
	};

	struct test *ptr = NULL;

	ptr = &node;

	ptr->fun1(5);	

	
	return 0;
}

