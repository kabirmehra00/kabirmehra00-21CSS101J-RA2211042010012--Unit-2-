#include <stdio.h>
void main() {
  printf("RA2211042010012\n");
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  if (num % 3 == 0) {
    printf("Given number %d is divisible by 3\n", num);
  }
  if (num % 3 != 0) {
    printf("Given number %d is not divisible by 3\n", num);
  }
}
