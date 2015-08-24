#include <stdio.h>


int gcd(x, y) {
	while (y > 0) {
	   int rem;
	   rem = x % y;
	   x = y;
	   y = rem;
	}
	return x;
}

int nextG() {  
   int g, n, a;

   g = gcd(n, a);
   n = n + 1; 
   a = a + g;
   return g;
}

int main() {
    int temp;
    int n, a;
    char str1[20];

    n = 2;
    a = 7;
    do {
	    do { 
    		temp = gcd(n, a);
		a = a + temp;
		n  = n + 1;
		//printf("a=%i, n=%i, temp = %i\n", a, n, temp);
	  } while(temp == 1);
    	printf("g = %i\n", a, n, temp);
   } while (a <= 9947);
}
