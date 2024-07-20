#include <stdio.h>

int main() {
  int num;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  int res[5] = {0,0,0,0,0};
  int i = 4;
  while (num > 0) {
    int remainder = num % 8;
    num = num / 8;
    res[i] = remainder;
    i--;
  }

  for (int i = 0; i < 5; i++) {
    printf("%d", res[i]);
  }
  printf("\n");

  return 0;
}