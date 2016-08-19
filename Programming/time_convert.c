#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
	char* time = (char *)malloc(10240 * sizeof(char));
	char hr[2];
	int hour, i;

	scanf("%s",time);

	for (i = 0; i < 2; i++)
		hr[i] = time[i];

	hour = atoi(hr);

	if (strcmp(time+8, "AM") == 0) {
		//nothing
	}
	else {
		hour = hour + 12;
		sprintf(hr, "%d", hour);
		strncpy(time, hr, 2);
	}
	
	time[8] = '\0';
	printf("%s", time);			

    return 0;
}

