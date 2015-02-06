#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {

	pid_t pid;

	pid = fork();
	
	switch (pid) {
	case -1:
		perror("The fork is failed\n");
	case 0:
		printf("from child\n");
		_exit(0);
	default :
		printf("From parent: chid's pid is %d\n", pid);
	}

return 0;
}
