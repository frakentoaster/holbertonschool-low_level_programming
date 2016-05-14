#include "lib/libshell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

int string_len(char *s) {
	int l;
	l = 0;
	while (s[l]) {
		l++;
	}
	return (l);
}

void print_string(char *s) {
	write(1, s, string_len(s));
}

void print_prompt(void) {
	print_string("Koopa$ ");
}

int print_char(char c)
{
  return (write(1, &c, 1));
}

int main(int ac, char **av, char **env) {
	char *command;
	char **argv;
	pid_t id;
	int status;
	int num;
	int st_cmd;

	while (1) { /* Infinite loop til exit */
		print_prompt();
		command = read_line(0);
		st_cmd = strcmp("echo $?", command);

		/* Check for exit command */
		if (strcmp("exit", command) == 0) {
			return (0);
		}

		if (st_cmd == 0) {
			printf("EXIT CODE YO! %d\n", WEXITSTATUS(status));
		}
		argv = string_split(command, ' ');

		/* Set PATH based on user input */
		if (strcmp("ls", command) == 0) {
			argv[0] = "/bin/ls";
		}

		if (strcmp("env", argv[0]) == 0) {
			argv[0] = "/usr/bin/env";
		}
		/* Handles echo commands */
		if (strcmp("echo", argv[0]) == 0) {
			argv[0] = "/bin/echo";
		}
//////////////////////////// TO DO //////////////////////////
/* kill off multiple child shells after calling.(prevents exit) */
/* dynamically pass in path and commands by parsing command line args */

		/*int r = 0;
		while (argv[r] != '\0'){
			print_string(*env);
			r++;
		}*/

		id = fork();
		/* Fork so doesn't end after first execve */
		if (id == 0 && st_cmd != 0) { /* Execute inside child */
			execve(argv[0], argv, env);
			perror("Execve Failure"); /* Execve only returns on failure */
			exit(EXIT_FAILURE);
		} else if (id == -1){
			perror("Fork Failure");
			exit(EXIT_FAILURE);
		} else {
			wait(&status);
		}
	}
	return (0);
}
