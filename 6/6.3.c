#include <stdio.h>

int GCD(int m, int n);

int main(void) {
  int m,n;
  printf("Enter a fraction: ");
  scanf("%d/%d", &m, &n);

  int gcd = GCD(m,n);

  printf("In lowest terms: %d/%d\n", m/gcd, n/gcd);

  return 0;
}

int GCD(int m, int n){
  while (1) {
    if (n == 0) {
      break;
    }
    int r = m % n;
    m = n;
    n = r;
  }
  return m;
}