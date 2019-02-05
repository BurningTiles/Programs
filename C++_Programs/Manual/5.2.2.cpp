/*
 * This program is to illustrate concept of call by reference.
 * In this swap function is used.
 */

#include <iostream>
using namespace std;
void swap(int &a,int &b){  // swap function which have call by reference concept so it will take address as parameter.
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int a=10,b=20;
    cout<<"Values before swapping : \nA = "<<a<<"    B = "<<b<<endl;
    swap(a,b);  // calling swap function. Any change in this function variable will directly affect on main function variables.
    cout<<"Values after swapping : \nA = "<<a<<"    B = "<<b<<endl;
    return 0;
}
