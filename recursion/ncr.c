/*
	Write a Program(WAP) to find nCr
*/
#include <stdio.h>

int C(int n, int r) {
    if(r==0 || r==n){
        return 1;
    }
    return C(n-1, r-1) + C(n-1, r);
}

int main(){
    int r = C(5,2);
    printf("%d\n", r);
    return 0;
}