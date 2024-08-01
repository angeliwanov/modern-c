#include <stdio.h>

int main() {
  char first[20];
  char last[20];
  printf("Enter a first and last name: ");
  scanf("%s %s", first, last);
  printf("%s, %c.\n", last, first[0]);
  
  return 0;
}