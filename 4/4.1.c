#include <stdio.h>

int main() {
  int num;
  printf("Enter three digit number: ");
  scanf("%d", &num);

  int first = num / 100;
  int second = num % 100 / 10;
  int third = num % 10;

  printf("%d%d%d\n", third, second, first);
  return 0;
}