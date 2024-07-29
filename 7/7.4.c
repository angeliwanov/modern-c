#include <stdio.h>

int charToInt(char c);

int main() {
  char str[20];
  printf("Enter phone number: ");
  scanf("%s", str);
  int i = 0;
  while(str[i] != '\0') {
    if (((int) str[i] <= 57 && (int) str[i] >= 48) || str[i] == '-') {
      printf("%c", str[i]);
    } else {
      printf("%d", charToInt(str[i]));
    }
    i++;
  }
  printf("\n");
  return 0;
}

int charToInt(char c) {
    switch (c) {
        case 'A':
        case 'B':
        case 'C':
            return 2;
        case 'D':
        case 'E':
        case 'F':
            return 3;
        case 'G':
        case 'H':
        case 'I':
            return 4;
        case 'J':
        case 'K':
        case 'L':
            return 5;
        case 'M':
        case 'N':
        case 'O':
            return 6;
        case 'P':
        case 'R':
        case 'S':
            return 7;
        case 'T':
        case 'U':
        case 'V':
            return 8;
        case 'W':
        case 'X':
        case 'Y':
            return 9;
        default:
            return -1;
    }
}