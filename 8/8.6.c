#include <stdio.h>
#include <ctype.h>

char convertChar(char c);

int main(void) {
  char msg[50];

  printf("Enter a message: ");
  int i = -1;
  do {
    i++;
    scanf("%c", &msg[i]);
  } while (msg[i] != '\n');

  for (int j = 0; j < i; j++) {
    printf("%c", convertChar(toupper(msg[j])));
  }
  printf("!!!!!!!!!!\n");
  return 0;
}

char convertChar(char c) {
  if (c == 'A') {
    return '4';
  } else if (c == 'B') {
    return '8';
  } else if (c == 'E') {
    return '3';
  } else if (c == 'I') {
    return '1';
  } else if (c == 'O') {
    return '0';
  } else if (c == 'S') {
    return '5';
  } else {
    return c;
  }
}