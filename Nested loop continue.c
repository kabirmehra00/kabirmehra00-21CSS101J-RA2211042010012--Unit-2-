#include <stdio.h>
void main() {
  printf("RA2211042010012\n");
  int i, j;
  for (i = 1; i <= 3; i++) {
    for (j = 1; j <= 3; j++) {
      if (i == j) { 
        continue;
      }
      printf("i : %d, j : %d\n", i, j);
    }
  }
}
