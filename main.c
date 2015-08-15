#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "rot13.h"

int main(int argc, const char *argv[])
{
  if (argc > 1) {
    for (int i = 1; i < argc; i++) {
      int length = strlen(argv[i]);
      char * strclone = calloc(sizeof(char), length);
      strcpy(strclone, argv[i]);

      srot13(strclone);

      printf ("%s ", strclone);
      free(strclone);
    }
    puts("");
  } else {
    char * line = NULL;
    size_t len = 255;
    ssize_t read;
    while((read = getline(&line, &len, stdin)) != -1) {
      srot13(line);
      printf ("%s", line);
    }
    free(line);
  }
  return 0;
}
