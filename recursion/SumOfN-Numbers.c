/*
	Write a Program(WAP) to find sum of n nos.
*/
#include <stdio.h>

int sum(int n) {
	if (n==0)
		return 0;
	else
		return sum(n-1) + n;
	
}

int main() {
	printf("%d \n", sum(5));
	return 0;
}
