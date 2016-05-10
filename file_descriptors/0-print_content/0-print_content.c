/*
	Function reads a file passed from command line
	and writes the files content to stdout
*/
#include <fcntl.h>
#include <unistd.h>

int main(int ac, char **argv) {
  int fd;
  char buf;

	/* Open file(2nd command line arg) with read only access mode */
  fd = open(argv[1], O_RDONLY);
  if (ac != 2 || fd == -1) {
    return (1);
  }
	/* Read content from file descriptor(fd) into the buffer(buf) */
  while (read(fd, &buf, 1)) {
    write(1, &buf, 1); /* Writes content from the buffer(buf) to stdout */
  }

  close(fd);
  return(0);
}
