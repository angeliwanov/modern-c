#include <stdio.h>

int main() {
  char s[4];

  printf("Enter 3 number digit:");
  scanf("%s", s);

  for (int i = 2; i >= 0; i--) {
    printf("%c", s[i]);
  }
  printf("\n");
  
  return 0;
}