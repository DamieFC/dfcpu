#include <stdio.h>
#include <stdlib.h>

int dfcpu(char usage[], char args[]) {
  if(!usage || !args) {
    perror("No something\n");
    exit(EXIT_FAILURE);
  }
  printf("Hello world!");
}
