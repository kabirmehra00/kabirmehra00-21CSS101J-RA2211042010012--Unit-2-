#include <stdio.h>
#if BACKGROUND == 7
	#define FOREGROUND 0
#elif BACKGROUND == 6
	#define FOREGROUND 1
#else
	#define FOREGROUND 6
#endif
void main() {
  printf("RA2211042010012\n");
	printf("FOREGROUND value = %d\n", FOREGROUND);
}
