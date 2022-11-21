#include <stdio.h>
void main() {
  printf("RA2211042010012\n");
	int i;
	for (i = 1; i < 10; i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("i : %d\n", i);
	}
}
