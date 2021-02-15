/*
	Write a Program(WAP) to demonstrate Indirect Recursion
*/
#include <stdio.h>

void funA(int n);
void funB(int n);

void funA(int n) {
	if (n>0) {
		printf("funA: %d \n", n);
		funB(n-1);
	}
}

void funB(int n) {
	if (n>1) {
		printf("funB: %d \n", n);
		funA(n/2);
	}
}

int main() {
	funA(20);
	return 0;
}
