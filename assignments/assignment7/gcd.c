#include <stdio.h>

int dc(int n1, int n2);

int main(void) {
	int n1, n2;
	int gcd;
	scanf("%d %d", &n1, &n2); 
	gcd = dc(n1,n2);
	printf("G.C.D.(%d, %d) = %d\n", n1, n2, gcd);
	return 0;
}

int dc(int n1, int n2) {
	if (n2 != 0) {
        return dc(n2, n1 % n2);
	
	else {
        return n1;
	}
}
