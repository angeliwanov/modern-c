#include <stdio.h>

#define FRACTION (4.0f / 3.0f)
#define PI 3.14f

int main(void) {
  int radius;

  printf("Enter the radius: ");
  scanf("%d", &radius);
  float volume = FRACTION * PI * radius * radius * radius;
  printf("volume is: %.2f\n", volume);

  return 0;
}