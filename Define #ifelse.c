#include <stdio.h>
#if defined (MAX)
	#define MIN 20
#else
	#define MAX 100
	#define MIN 200
#endif
void main() {
  printf("RA2211042010012\n");
	printf("MAX value = %d, MIN value = %d\n", MAX, MIN);
}
