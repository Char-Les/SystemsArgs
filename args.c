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

 char ** parse_args( char * x ){
   char * line = x;
   char ** args = calloc(5, sizeof(char *));
   int i = 0;
   printf("while loop -------\n");
   // while(line){
     args[i] = strsep(&line, " ");
   //   i++;
   // }
   printf("while end----------\n");
   return args;
 }

int main() {
  // testing
  char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);

  char ** x = (char **) parse_args("ls -a -l");
  printf("%s %s %s   \n", x[0], x[1], x[2]);
  // execvp(x[0], x);
}
