#include <stdio.h>

int main()
{

	int num, i, j, val;

	scanf("%d", &num);

	val = num-1;
	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			if (j >= val)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
		val--;
	} 


return 0;
}
