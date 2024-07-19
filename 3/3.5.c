#include <stdio.h>

int main() {
  int list[16];

  printf("Enter the numbers from 1 to 16 in any order:\n");

  for (int i = 0; i < 16; i++) {
    scanf("%d", &list[i]);
  }

  int rows [4] = {0,0,0,0};
  int cols [4] = {0,0,0,0};
  int diag [2] = {0,0};

  for (int i = 0; i < 16; i++) {
    printf("%2d  ", list[i]);
    cols[i%4] += list[i];
    rows[i/4] += list[i];
    if (i % 5 == 0) {
      diag[0] += list[i];
    }
    if (i > 0 && i % 3 == 0 && i < 15) {
      diag[1] += list[i];
    }
    if((i + 1) % 4 == 0) {
      printf("\n");
    }
  }

  printf("Row sums: ");
  for (int i = 0; i < 4; i++) {
    printf("%2d ", rows[i]);
  }
  printf("\n");

  printf("Col sums: ");
  for (int i = 0; i < 4; i++) {
    printf("%2d ", cols[i]);
  }
  printf("\n");

  for (int i = 0; i < 2; i++) {
    printf("%2d ", diag[i]);
  }
  printf("\n");


  return 0;
}