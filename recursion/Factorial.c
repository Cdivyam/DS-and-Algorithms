/*
	Write a Program(WAP) to find Factorial of a number
*/
#include <stdio.h>

int fact(int n) {
	if ( n==0 )
		return 1;
	else
		return fact(n-1)*n;
}

int main() {
	printf("%d\n", fact(5));
	return 0;
}
