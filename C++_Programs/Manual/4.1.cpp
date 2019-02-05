/*
 * This program is to illustrate inline function.
 * Inline function deals with the replacing of the logic where it is called.
 * Therefore it works faster than normal function.
 * In this we will create function for factorial and GCD.
 */

#include <iostream>
using namespace std;

inline long long fact(long long n){
	return (n<2)?1:n*fact(n-1);
}  // This function will return the factorial of n(integer number).

inline long GCD(int a,int b){
	return (a%b==0)?b:GCD(b,a%b);
}  // This function will retun the GCD of two numbers a and b.

int main()
{
	cout<<"\nFactorial of 8 is "<<fact(8);  // calling of factorial function.
	cout<<"\nGCD of 12 and 40 is "<<GCD(12,40)<<endl;  // calling of GCD function.
	return 0;
}
