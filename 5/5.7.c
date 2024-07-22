#include <stdio.h>

int main (void) {
  int arr[4];
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
  
  int min = arr[0];
  int max = arr[0];

  for (int i = 1; i < 4; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }

    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);
 
  return 0;
}