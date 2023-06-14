#include <stdio.h>  // printf(), NULL
#include <time.h>   // time()
#include <stdlib.h> // strand(), rand()
		    //
#define NMAX 10


int main() {
	srand(time(NULL)); // Initialization, should only be called once.
	
	for (int i = 0; i < NMAX; i++) {
		int r = rand();    // Returns a pseudo-random integer between 0 and RAND_MAX
		printf("%d ", r);
	}
	printf("\n");
	return 0;
}	
