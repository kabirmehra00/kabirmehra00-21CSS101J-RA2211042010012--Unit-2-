#include <stdio.h>
int main(){
  printf("RA2211042010012\n");
	int i;
	for (i = 1; i < 10; i++) {
		if (i % 5 == 0) {
			break;		
		}		
		printf("i : %d\n", i);
	}
}
