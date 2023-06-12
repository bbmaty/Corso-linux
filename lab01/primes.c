#include <stdio.h>

int is_prime(int n);

int main(){
	int n = 5;
        if (is_prime(n)) {
		printf("%d è primo\n", n);
        } else {
        	printf("%d non è primo\n", n);	
	
        }
	return 0;
}

int  is_prime(int n) {
	for (int i = 2; i <= n / 2 + 1; i++) {
	       if (n % i == 0) {	
                	return 0;
	       }
        }
        return 1;	
}

