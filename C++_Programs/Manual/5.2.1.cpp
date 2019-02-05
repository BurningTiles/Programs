/*
 * This program is to illustrate concept of call by value.
 */

#include <iostream>
using namespace std;
void swap(int a,int b){  // swap function which have call by value concept so it will copy value of parameter variables.
	int temp=a; 
	a=b;
	b=temp;
	cout<<"Values after swapping : \nA = "<<a<<"    B = "<<b<<endl;
}
int main(){
	int a=10;
	int b=20;
	cout<<"Values before swapping : \nA = "<<a<<"    B = "<<b<<endl;
	swap(a,b); // calling swap function. Any change in variable provided to function will not affect main function variables.
	return 0;
}
