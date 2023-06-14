#include <stdio.h>  // printf(), NULL
#include <time.h>   // time()
#include <stdlib.h> // strand(), rand()
		    //
#define NMAX 10
#define MY_RAND_MIN 1
#define MY_RAND_MAX 30

void print_array(int valus[]);

int main() {
	int values[NMAX] = {0}; // {0, 0, ...,0}
				
	srand(time(NULL)); // Initialization, should only be called once.
      //srand(0);  
	
	for (int i = 0; i < NMAX; i++) {
		int r = MY_RAND_MIN + (rand() % MY_RAND_MAX);    // Returns a pseudo-random integer between 0 and RAND_MAX
	        values[i] = r;
	}
        print_array(values);
	printf("\n");
	return 0;
}	

void print_array(int values[]) {
        for (int i = 0; i < NMAX; i++) {
             printf("%d ", values[i]);
	}
}
