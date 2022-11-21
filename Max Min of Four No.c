#include <stdio.h>
int main() {
	int a, b, c, d;
  printf("RA2211042010012\n");
	printf("Enter 4 numbers : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int max, min;
	if (a > b) {
	max = a;
	min = b;
	}else{
		max = b;
		min = a;
	}
	if (c > d) {
		if (c > max) {
			max = c;
    	}
    	if (d < min) {
    		min = d;
    	}
    }
    else {
    	if (d > max) {
    		max = d;
        }
        if (c < min) {
        	min = c;
        }
    }
    printf("Max value : %d\nMin value : %d\n", max, min);
    return 0;
}
