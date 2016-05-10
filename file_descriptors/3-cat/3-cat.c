/*
	Function reads a content from stdin or from file passed via command line
	and writes that content to stdout
*/
#include <fcntl.h>
#include <unistd.h>

int main(int ac, char **argv) {
  int fd;
  char buf;

  /* Open file(2nd command line arg) with read only access mode */
  fd = open(argv[1], O_RDONLY);

  if (ac == 2) {
    while (read(fd, &buf, 1)) {
      write(1, &buf, 1); /* Writes content from the buffer(buf) to stdout */
    }
    close(fd);
    return (0);
  } else if (ac == 1) {
  	/* Read content into the buffer(buf) */
    while (read(0, &buf, 1)) {
      write(1, &buf, 1); /* Writes content from the buffer(buf) to stdout */
    }
    return (0);
  }
  return(1);
}
