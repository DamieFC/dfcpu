#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <org_asm.h>
#include <micro.h>

int dfcpu(char usage[], char args[]) {
  if(!usage || !args) {
    perror("No something. Either no usage or no args.\n");
    exit(EXIT_FAILURE);
  }
  else if(strcmp(usage[0], "hello") == 0) {
    printf("Hello world!");
    return 0;
  }
  else if(strcmp(usage[0], "asm") == 0) {
    org_asm(args[0]);
  }
}

int org_asm(char file[]) {
  if(!file) {
    perror("Bruh there's no file you nitwit."); // First time I've ever used nitwit in my code (that's for the record)
    exit(EXIT_FAILURE);
  }
  else {
    printf("Can't assemble yet");
    return 0;
  }
}
