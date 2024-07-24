#include <stdio.h>

int main () {
  float max;

  while (1) {
    printf("Enter a number: ");
    float num;
    scanf("%f", &num);
    if (num == 0) {
      break;
    }
    if (num > max) {
      max = num;
    }
  }

  printf("The largest number entered was %.2f\n", max);

  return 0;
}