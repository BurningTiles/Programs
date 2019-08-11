#include<stdio.h>
int f(int x) { if(x<=1) return 1; return x*f(x-1);} int main(){int n=5; printf("Fact of %i = %i",n,f(n)); }
