#include <stdio.h>

int main(void) {
  int earliest[3] = {0,0,0};

  while (1) {
    int m,d,y; 
    printf("Enter a date (mm/dd/yy):");
    scanf("%d/%d/%d", &m, &d, &y);

    if (m == 0 && d == 0 && y == 0) {
      break;
    }

    if (earliest[0] == 0 && earliest[1] == 0 && earliest[2] == 0) {
      earliest[0] = m;
      earliest[1] = d;
      earliest[2] = y;
    }

    if (earliest[2] > y) {
      earliest[0] = m;
      earliest[1] = d;
      earliest[2] = y;
    }

    if (earliest[2] == y && earliest[0] > m) {
      earliest[0] = m;
      earliest[1] = d;
      earliest[2] = y;
    }

    if (earliest[2] == y && earliest[0] == m && earliest[1] > d) {
      earliest[0] = m;
      earliest[1] = d;
      earliest[2] = y;
    }
  }

  printf("%.2d/%.2d/%.2d is the earliest date\n", earliest[0], earliest[1], earliest[2]);
}



