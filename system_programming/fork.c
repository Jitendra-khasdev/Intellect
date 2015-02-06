#include <stdio.h>

int main() {

	int pid;

	pid = fork();

	if (pid == 0) {
		printf("from child\n");
	} else {
		printf("from parent: child's pid %d\n", pid);
	}




}
