#include "lib/libshell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

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

int main(int ac, char **av, char **env) {
	char *command;
	char **argv;
	pid_t id;
	int status;

	while (1) { /* Infinite loop til exit */
		print_prompt();
		command = read_line(0);
		argv = string_split(command, ' ');
		/* Check for exit command */
		if (strcmp("exit", argv[0]) == 0) {
			return (0);
		}
		id = fork();
		/* Fork so doesn't end after first execve */
		if (id == 0) { /* Execute inside child */
			execve(argv[0], argv, env);
		} else {
			wait(&status);
		}
	}
	return (0);
}
