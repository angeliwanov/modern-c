#include <stdio.h>

void printN(int n);

int main(void) {
  for (int i = 6; i > 3; i--) {
    printN(i+1);
    printf("*\n");
  }

  for (int i = 3; i > 0; i--) {
    if (i>1) {
      printN(3-i);
      printf("*");
      printN(i-3+i);
    }
    else{
      printN(i+1);
    }
    printf("*\n");
  }
  return 0;
}

void printN(int n) {
  for (int i = 0; i < n; i++) {
    printf(" ");
  }
}