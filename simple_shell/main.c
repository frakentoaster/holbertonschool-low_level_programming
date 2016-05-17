#include "lib/libshell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_functions.h"

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


void free_everything(char **command);

int main(int ac, char **argv, char **env) {
	char *command;
	pid_t pid;
	int status;
	char **args;
	char *cmd;
	/*int st_call;*/

	if (argv[0] == NULL) {};
	while (1) { /* Infinite loop til exit */
		print_prompt();
		command = read_line(0);
		/*st_call = strcmp("echo $?", command); */
		args = string_split(command, ' ');
		cmd = args[0];

		if (strcmp("echo", command) == 0) {
			printf("%d\n",WEXITSTATUS(status));
		}
		free(command);
		if (strcmp("ls", args[0]) == 0)	{	/* Set PATH based on user input */
			args[0] = "/bin/ls";
		}
		if (strcmp("env", args[0]) == 0) {
			args[0] = "/usr/bin/env";
		}

		if (strcmp("exit", args[0]) == 0) {		/* Check for exit command */
			free_everything(args);
			return (0);
		}

		pid = fork(); 		/* Fork so doesn't end after first execve */
		if (pid == 0) { /* Execute inside child */
			execve(args[0], argv, env);
			if (strcmp("echo", args[0]) != 0) {
				perror("Execve Failure"); /* Execve only returns on failure */
			}
			free(args);
			free(cmd);
			exit(EXIT_FAILURE);
		} else if (pid == -1 || ac != 1){
			perror("Fork Failure");
			exit(EXIT_FAILURE);
		} else {
			wait(&status);
		}
		if (strcmp("echo", args[0]) == 0) {
			free_everything(args);
		} else {
			free(cmd);
			free(args);
		}
	}
	return (0);
}

void free_everything(char **args)
{
	int i;
	i = 0;
	while (args[i] != 0) {
		free(args[i]);
		i++;
	}
	free(args);
}
