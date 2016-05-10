/*
	Function prints a file's permission to stdout
*/
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "my_functions.h"

int main(int ac, char **argv) {
  struct stat fileStat;

  if (ac != 2 || stat(argv[1], &fileStat) < 0) {
    return (1);
  } else if (S_ISLNK(fileStat.st_mode)) { /* check if arg is symbolic link */
    print_char('l');
  } else if (S_ISDIR(fileStat.st_mode)) { /* check if arg is directory */
    print_char('d');
  }
  print_char( (fileStat.st_mode & S_IRUSR) ? 'r' : '-');
  print_char( (fileStat.st_mode & S_IWUSR) ? 'w' : '-');
  print_char( (fileStat.st_mode & S_IXUSR) ? 'x' : '-');
  print_char( (fileStat.st_mode & S_IRGRP) ? 'r' : '-');
  print_char( (fileStat.st_mode & S_IWGRP) ? 'w' : '-');
  print_char( (fileStat.st_mode & S_IXGRP) ? 'x' : '-');
  print_char( (fileStat.st_mode & S_IROTH) ? 'r' : '-');
  print_char( (fileStat.st_mode & S_IWOTH) ? 'w' : '-');
  print_char( (fileStat.st_mode & S_IXOTH) ? 'x' : '-');
  print_char('\n');
  return 0;
}
