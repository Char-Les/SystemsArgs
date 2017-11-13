#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>

/*
  Joshua Turcotti Charles Weng
  Systems - 4
  11/13
  HW 11 - Don't Get Argumentative
*/

char ** parse_args(char * line){
  char ** args = calloc(5, sizeof(char *));;
  int i = -1;
  while(i++ < 5){
    args[i] = strsep(&line, " ");
  }
  return args;
}

int main() {
  // given tests
  char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep(&s1, "-"));
  printf("[%s]\n", s1);

  char test[] = "ls -a -l";
  char ** x = (char **) parse_args(test);
  printf("%s %s %s   \n", x[0], x[1], x[2]);
  // execvp(x[0], x);
}
