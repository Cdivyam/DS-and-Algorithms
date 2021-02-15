#include <stdio.h>

double e(int x, int n) {
	static double s;
	if ( n==0 )
		return s;
	s = 1 + x*s/n;
	return e(x, n-1);
}

int main() {
	double r;
	r = e(1,10);
	printf("%lf\n",r);
	return 0;
}
