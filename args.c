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

 char ** parse_args( char * line ){
   char ** args = calloc(5, sizeof(char *));
   int i = 0;
   while(i++ < 5){
     args[i] = (char *) strsep(&line, " ");
   }
   return args;
 }

int main() {
  char ** x = (char **) parse_args("ls -a -l");
  execvp(x[0], x);
}
