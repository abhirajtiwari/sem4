#include <stdio.h>
#include <math.h>

int consecutiveGCD (int m, int n) {
	int opcount = 0;
	int gcd = 1;
	for (int i = fmin(m,n); i > 1; --i) {
		opcount++;
		if (m%i==0 && n%i==0) {
			gcd = i;
			break;
		}
	}
	printf ("%d\n", opcount);
	return gcd;
}

int main() {
	printf("Enter 2 numbers: ");
	for (int i = 0; i < 40; ++i) {
		int a, b;
		scanf("%d%d", &a, &b);
		consecutiveGCD(a,b);
		//printf("GCD: %d\n", consecutiveGCD(a,b));
	}
}