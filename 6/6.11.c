#include <stdio.h>

int factorial(int number);

int main (void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  double e = 1;
  for (int i = 1; i <= n; i++) {
    e += (1.0/factorial(i));
  }
  printf("%f\n", e);

  return 0;
}

int factorial(int number) {
  int result = 1;

  for (int i = 1; i <= number; i++) {
    result *= i;
  }

  return result;
}