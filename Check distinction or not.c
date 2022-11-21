#include <stdio.h>
void main() {
  printf("RA2211042010012\n");
  int marks, distinction_marks = 75;
  printf("Enter marks : ");
  scanf("%d", &marks);
  if (marks > distinction_marks) { // Write the if condition
    printf("User secured distinction.\n");
  } else { // Write else part
    printf("User did not secure distinction.\n");
  }
}
