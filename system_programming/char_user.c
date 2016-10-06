#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



int main()
{
	int fd, wr_count;

	fd = open("/dev/switch", O_RDWR);
	wr_count = write(fd, "hello", sizeof("hello"));
	
	if (wr_count > 0)
		return printf("%d", wr_count) ;
	else
		return printf("write does not worked\n");
}
