/*
 * This program is to illustrate default arguments.
 * In this sum function is created which take upto 4 arguments(min 1 required).
 */

#include <iostream>
using namespace std;
// parameters with default values always need to be after parameter without default value.
long sum(long a,long b=0,long c=0,long d=0){  // sum function and b,c and d arguments have default values. so if these values are not passed it will consider it as zero.
	return a+b+c+d; // return the sum.
}

int main(){
	cout<<"Sum of 2 and 6 is "<<sum(2,6)<<endl;  // Calling sum function using 2 parameters.
	cout<<"Sum of 3, 5 and 9 is "<<sum(3,5,9)<<endl;  // Calling sum function using 3 parameters.
	cout<<"Sum of 4, 2, 7 and 1 is "<<sum(4,2,7,1)<<endl;  // Calling sum function using 4 parameters.
	return 0;
}
