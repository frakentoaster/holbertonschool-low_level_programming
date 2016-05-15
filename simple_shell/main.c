#include "lib/libshell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

void print_prompt(void) {
	char *s;
	int l;
	s = "Koopa$ ";
	l = 0;

	while (s[l]) {
		l++;
	}
	write(1, s, l);
}

int print_char(char c) {
  return (write(1, &c, 1));
}

int main() {
	char *command;
	char **argv;
	pid_t pid;
	int status;
	int st_cmd;
	int exstat;
	char *env[] = {NULL,0};

	/* Infinite loop til exit */
	while (1) {
		print_prompt();
		command = read_line(0);
		st_cmd = strcmp("echo $?", command);
		/* Print return status */
		if (st_cmd == 0) {
			print_char(exstat + 48);
			print_char('\n');
		}
		argv = string_split(command, ' ');

		/* Check for builtin commands and Set PATH accordingly */
		if (strcmp("ls", command) == 0) {
			argv[0] = "/bin/ls";
		}

		if (strcmp("env", argv[0]) == 0) {
			argv[0] = "/usr/bin/env";
		}

		/* Ignore if echo $? */
		if (strcmp("echo", argv[0]) == 0 && st_cmd != 0) {
			argv[0] = "/bin/echo";
		}
		/* Fork so doesn't end after first execve */
		pid = fork();
		/* Check for exit command */
		if (strcmp("exit", command) == 0) {
			exit(EXIT_SUCCESS);
		}
		/* Execute inside child */
		if (pid == 0) {
			execve(argv[0], argv, env);
			/* Execve only returns on failure */
			if (st_cmd != 0) {
				perror("Execve Failure");
				return (1);
			}
			return (1);
			exit(EXIT_FAILURE);
		} else if (pid == -1) {
			perror("Fork Failure");
			exit(EXIT_FAILURE);
		} else {
			wait(&status);
			exstat = WEXITSTATUS(status);
		}
	}
	return (0);
}
