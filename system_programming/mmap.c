#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>


int main()
{

	int fd, page;
	char *data;
	fd = open("/var/log/syslog", O_RDWR);

	page = getpagesize();

	data = mmap((caddr_t)0, page, PROT_READ, MAP_SHARED, fd, 0);

	printf("%s", data);

	munmap((caddr_t)0, page);
}
