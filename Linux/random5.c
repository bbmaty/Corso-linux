#include <stdio.h>  // printf(), NULL
#include <time.h>   // time()
#include <stdlib.h> // strand(), rand()
		    
#define NMAX 10
#define MY_RAND_MIN 1
#define MY_RAND_MAX 30

void print_array(int values[]);
int in_array(int values[], int r);
int main() {
	int values[NMAX] = {0}; // {0, 0, ...,0}
				
	srand(time(NULL)); // Initialization, should only be called once.
      //srand(0);  
	
	for (int i = 0; i < NMAX;) {
		int r = MY_RAND_MIN + (rand() % MY_RAND_MAX);    // Returns a pseudo-random integer between 0 and RAND_MAX
	        if (!in_array(values, r)) {
		    values[i] = r;
		    i++;
		}
	}
	print_array(values);
	return 0;

}
void print_array(int values[]) {
        for (int i = 0; i < NMAX; i++) {
             printf("%d ", values[i]);
	}
	printf("\n");
}

int in_array(int values[], int r) {
          for (int i = 0; i < NMAX; i++) {
                 if (values[i] == r) {
                     return 1;
		 }
	  }
	  return 0;
}

