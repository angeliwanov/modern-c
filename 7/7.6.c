#include <stdio.h>

int main(void) {
  printf("int %lu\n", sizeof(int));
  printf("short %lu\n", sizeof(short));
  printf("long %lu\n", sizeof(long));
  printf("float %lu\n", sizeof(float));
  printf("doulbe %lu\n", sizeof(double));
  printf("long double %lu\n", sizeof(long double));
  return 0;
}