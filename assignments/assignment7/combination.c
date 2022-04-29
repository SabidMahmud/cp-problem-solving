#include <stdio.h>
#include <stdlib.h>

long long int factorial( int num );

	int main(void) {
		int n, r;
		long long int ncr;
		scanf("%d %d", &n, &r);

		ncr = factorial(n) / (factorial(n-r) * factorial(r));

		printf("%lld\n", ncr);
		return 0;
	}

long long int factorial( int num ) {
	if(num == 0 || num == 1) {
		return 1;
	} else {
		return num * factorial(num - 1);
	}
}
