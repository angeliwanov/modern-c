#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
#define NUM_DIRECTIONS 4

int inside(int row, int col);

void rand_row_col(int rand_num, int* row, int* col);

int main (void) {
  char matrix[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matrix[i][j] = '.';
    }
  }
  srand((unsigned) time(NULL));

  char c = 'A';
  int row = 0;
  int col = 0;
  matrix[0][0] = c;
  

  while (c < 'Z') {
    c++;
    int rand_num = rand() % NUM_DIRECTIONS; 
    int newRow = row;
    int newCol = col;
    int stop = 0;
    int i = 0;

    do {
      newRow = row;
      newCol = col;
      rand_row_col(rand_num, &newRow, &newCol);
      rand_num = i;
      
      i++;
      if (i > 4) {
        stop = 1;
        break;
      }

    } while (matrix[newRow][newCol] != '.' || !inside(newRow, newCol));

    if (stop) {
      break;
    }

    row = newRow;
    col = newCol;

    matrix[row][col] = c;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%c ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}

int inside(int row, int col) {
  return row < N && row >=0 && col >=0 && col < N;
}

void rand_row_col(int rand_num, int* row, int* col) {
  if (rand_num == 0) {
    *row = *row + 1;
  } else if (rand_num == 1) {
    *col = *col + 1;
  } else if (rand_num == 2) {
    *row = *row - 1;
  } else if (rand_num == 3) {
    *col = *col - 1;
  }
}
