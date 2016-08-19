#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    int alice, bob;
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    
    
    alice = bob = 0;
    
    if (a0 != b0)
	if (a0 > b0)
		alice++;
    	else
		bob++;
    
    if (a1 != b1)
    	if (a1 > b1)
        	alice++;
    	else
        	bob++;
    
    if (a2 != b2)
    	if (a2 > b2)
        	alice++;
    	else
        	bob++;
    
    printf("%d %d", alice, bob);
    return 0;
}

