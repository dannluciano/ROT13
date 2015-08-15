#include <assert.h>
#include <string.h>
#include "rot13.h"

int main(void) {
  assert(rot13('A') == 'N');
  assert(rot13('a') == 'n');
  assert(rot13('B') == 'O');
  assert(rot13('b') == 'o');
  assert(rot13('Y') == 'L');
  assert(rot13('y') == 'l');
  assert(rot13('Z') == 'M');
  assert(rot13('z') == 'm');

  assert(rot13('N') == 'A');
  assert(rot13('n') == 'a');
  assert(rot13('O') == 'B');
  assert(rot13('o') == 'b');
  assert(rot13('L') == 'Y');
  assert(rot13('l') == 'y');
  assert(rot13('M') == 'Z');
  assert(rot13('m') == 'z');

  assert(rot13('0') == '0');
  assert(rot13('9') == '9');

  assert(rot13('\\') == '\\');
  assert(rot13('`') == '`');
  assert(rot13('?') == '?');
  assert(rot13('!') == '!');

  char str1[255];
  char str2[255];

  strcpy(str1, "Why did the chicken cross the road?");
  strcpy(str2, "To get to the other side!");

  assert(strcmp(srot13(str1), "Jul qvq gur puvpxra pebff gur ebnq?") == 0);
  assert(strcmp(srot13(str2), "Gb trg gb gur bgure fvqr!") == 0);
  puts("All Tests Passed =)");
  return 0;
}
