#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
	int n, positive, negative, zero, arr_i; 
	scanf("%d",&n);
    
	int arr[n];
    	for(arr_i = 0; arr_i < n; arr_i++){
       		scanf("%d",&arr[arr_i]);
    	}

	positive = negative = zero = 0;

    	for(arr_i = 0; arr_i < n; arr_i++){
       		if (arr[arr_i] == 0)
			zero++;
		if (arr[arr_i] > 0)
			positive++;
		if (arr[arr_i] < 0)
			negative++;
    	}

	float num = (float) n;

	printf("%.6f %.6f %.6f", positive/num, negative/num, zero/num);
	
	return 0;
}

