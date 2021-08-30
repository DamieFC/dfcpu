#include <stdio.h>
#include <stdlib.h>

int dfcpu(char usage[], char args[]) {
  if(!usage || !args) {
    perror("No something\n");
    exit(EXIT_FAILURE);
  }
  else if(usage[0] == "hello") {
    printf("Hello world!");
    return 0;
  }
  else if(usage[0] == "asm") {
    if(!args) {
      perror("No arguments");
      exit(EXIT_FAILURE);
    }
    else {
      org_asm(args[0]);
    }
  }
}

// Org-asm

void org_asm(FILE* file) {
  if(!file){
    perror(No file);
  }
}
