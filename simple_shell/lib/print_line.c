#include <stdlib.h>
#include <unistd.h>
#include <stat.h>
#include <errno.h>

/*
char *read_line(int fd) {
	char *buffer;
	int bytes_mallocated */
	/* Set default buff size */
	/*bytes_mallocated = 64;
	buffer = (char *)malloc(bytes_mallocated);


}
*/

char *read_line(int fd) {
	long long size;
	/* Allocate memory for stat structure */
	struct stat *buffer = malloc(sizeof(struct stat));
	/* Set errno to zero */
	errno = 0;

	if (stat(fd, buffer) == 0) {
		size = buffer->st_size;
		return (fd); /* WIP <----------------- */
	} else { /* If stat fails, return error */
		perror (fd);
	}
}
