#include <stdio.h>

int main() {
  char upc[13];

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%s", upc); 

  int add1 = (upc[1]-'0') + (upc[3]-'0') + (upc[5]-'0') + (upc[7]-'0') + (upc[9]-'0') + (upc[11]-'0');
  int add2 = (upc[0]-'0') + (upc[2]-'0') + (upc[4]-'0') + (upc[6]-'0') + (upc[8]-'0') + (upc[10]-'0');
  int res = 9 - (((add1 * 3 + add2) - 1) % 10);

  printf("Check digit: %d\n", res);
  return 0;
}