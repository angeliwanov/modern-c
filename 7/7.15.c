#include <stdio.h>


int factorial(int n);

int main(void) {
  int number;
  printf("Enter a positive integer: ");
  scanf("%d", &number);
  long double f = factorial(number);
  printf("%Lf\n", f);
}

int factorial(int n) {
  long double f = 1;
  for (int i = 2; i <= n; i++) {
    f *= i;
  }
  return f;
}