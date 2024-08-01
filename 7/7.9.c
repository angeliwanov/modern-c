#include <stdio.h>

int main(void) {
  char input[20];

  printf("Enter a 12-hour time: ");
  scanf("%[^\n]s", input);
  printf("%s\n", input);
  return 0;
}