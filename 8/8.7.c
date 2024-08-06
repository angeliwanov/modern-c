#include <stdio.h>
#define N 3

int main(void) {
  int matrix[N][N];

  for (int i = 0; i < N; i++) {
    printf("Enter row %d: ", i+1);
    for (int j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\n");
  printf("Row totals: ");
  for (int row = 0; row < N; row++) {
    int sum = 0;
    for (int col = 0; col < N; col++) {
      sum += matrix[row][col];
    }
    printf("%d ", sum);
  }
  printf("\n");

  printf("Column totals: ");
  for (int col = 0; col < N; col++) {
    int sum = 0;
    for (int row = 0; row < N; row++) {
      sum += matrix[row][col];
    }
    printf("%d ", sum);
  }
  printf("\n");

}