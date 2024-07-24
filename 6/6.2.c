#include <stdio.h>

int main(){
  int m, n;

  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);
  
  while (1) {
    if (n == 0) {
      break;
    }
    int r = m % n;
    m = n;
    n = r;
  }

  printf("%d\n", m);
  return 0;
}