#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = {'0'};
	int len  = 0;
	
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	
	/*Remove the last char*/
	str[len-1] = '\0';
	len = len - 1;

	palindrome(str, len);
	return 0;
}


int palindrome(char *str, int len)
{
	int i, flag;
	
	i = flag = 0;
	while (i < len) {
		if (str[i] != str[len]) {
			flag = 1;
			break;	
		}
		i++;
		len--;
	}

	if (flag == 0) {
		printf("Palindrome\n");
	} else {
		printf("Not Palindrome\n");
	}

	return 0;
}
