/*
	Function reads a file passed from command line
	and writes the files content into another file
*/
#include <fcntl.h>
#include <unistd.h>

int main(int ac, char **argv) {
  int fd;
	int fd2;
  char buf;

	/* Open file(2nd command line arg) with read only access mode */
  fd = open(argv[1], O_RDONLY);
	/* Open destination file with write only access mode and set permissions */
	fd2 = open(argv[2], O_WRONLY | O_CREAT, 0666);
  if (ac <= 2 || fd == -1 || fd2 == -1) {
    return (1);
  }
	/* Read content from file descriptor(fd) into buffer(buf) */
  while (read(fd, &buf, 1)) {
    write(fd2, &buf, 1); /* Writes content from buffer(buf) to file(fd2) */
  }
  close(fd);
  return(0);
}
