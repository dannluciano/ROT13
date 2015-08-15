#include "rot13.h"

static char hashmap[] = {"NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm"};

char rot13(char character) {
  if (isalpha(character)){
      char c = character - 'A';
      return hashmap[(int)c];
  } else {
    return character;
  }
}

char* srot13(char* str) {
  int length = strlen(str);
  for (int i = 0; i < length; i++) {
    str[i] = rot13(str[i]);
  }
  return str;
}
