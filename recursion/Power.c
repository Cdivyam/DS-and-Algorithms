/*
	Write a Program(WAP) to demonstrate various Powers
*/
#include <stdio.h>

int SelfPow(int n) {
	int i=n;
	if (i==0)
		return 1;
	else {
		i--;
		return SelfPow(n)*n;
	}
}

int NPow(int m, int n) {
	if (n==0)
		return 1;
	else
		return NPow(m,n-1)*m;
}

int FPow(int m, int n) {
	if (n==0)
		return 1;
	if (n%2==0)
		return FPow(m*m, n/2);
	else
		return m*FPow(m*m, (n-1)/2);
}
int main() {
	int r ;
	r = FPow(2, 9);
	printf("%d\n", r);
	return 0;
}
