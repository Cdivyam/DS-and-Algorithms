/*
	Write a Program(WAP) to demonstrate Nested Recursion
*/
#include <stdio.h>

int fun(int n){
	if(n>100)
		return n-10;
	return fun(fun(n+11));
}

int main(){
	int r = fun(30);
	printf("%d\n", r);
	return 0;
}


