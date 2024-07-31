#include <stdio.h>

int main(void) {
  int chars = 0;
  int words = 0;

  printf("Enter a sentence: ");

  while (1) {
    char c = getchar();
    if (c == '\n') {
      words++;
      break;
    } else if (c == ' ') {
      words++;
    } else {
      chars++;
    }
  }

  printf("%.1f\n", (double) chars/words);

  return 0;
}