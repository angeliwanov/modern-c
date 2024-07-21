#include <stdio.h>

int main(void) {
  int h,m;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &h, &m);

  if (h == 12) {
    printf("Equivalent 12-hour time: %.2d:%.2d PM\n", h, m);
  } else if (h == 24) {
    printf("Equivalent 12-hour time: %.2d:%.2d AM\n", h-12, m);
  } else if (h > 12) {
    printf("Equivalent 12-hour time: %.2d:%.2d PM\n", h-12, m);
  } else {
    printf("Equivalent 12-hour time: %.2d:%.2d AM\n", h, m);
  }

  return 0;
}