#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int fd, len, i;
	struct stat sb;
	char *p = NULL;
	char temp = 95;
	char *ptr = "hello world";


	if (argc < 2) {
		fprintf(stderr, "%s <file>\n", argv[0]);
		return -1;
	}

	fd  = open(argv[1],  O_RDWR | O_CREAT);

	if (fd == -1)
		perror("open");

	if (fstat(fd, &sb)) 
		perror("fstat");
	
	len = sb.st_size;
	p = mmap(0, len, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

	i = 0;
	while (i++ < len)
		p[i] = 'a';
	if (msync(p, len, MS_SYNC) < 0)
		perror("ms sync");

	printf("val == %s\n", p);

	return 0;
}
