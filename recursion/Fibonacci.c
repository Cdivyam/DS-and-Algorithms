/*
	Write a Program(WAP) to print Fibonacci Series
*/
#include <stdio.h>

int Rf(int n) {
	if(n<=1)
		return n;
	return Rf(n-2) + Rf(n-1);
}

int If(int n) {
	int a=0, b=1, c, i;
	if(n<=1)
		return n;
	for ( i=2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int F[10];

int Mf(int n){
	if(n<=1){
		F[n]=n;
		return n;
	}
	else{
		if(F[n-2] == -1)
			F[n-2] = Mf(n-2);
		
		if(F[n-1] == -1)
			F[n-1] = Mf(n-1);
		F[n] = F[n-2]+F[n-1];	
		return F[n-2] + F[n-1];
	}
}

int main() {
	int i;
	for (i=0;i<10;i++)
		F[i]=-1;
	int r;
	r = Mf(6);
	printf("%d\n",r);
	return 0;
}
