#include <iostream>
#include "sort.h"
using namespace std;

//  Function to print array.
void print(int x[],int n){
	cout<<"\n[ ";
	for (int i=0; i<n; i++)  //  Loop for printing values.
		cout<<x[i]<<" ";
	cout<<"]"<<endl;
}

int main(){
	int array[]={83,13,34,1,6,123,646,1236,7245,23,7,96,244};  //  Declaring an array with values.
	int size = sizeof(array)/sizeof(int);  //  Finding size of array.
	
	cout<<"Array before sorting : ";
	print(array,size);  //  Printing array.
	
	bubbleSort(array,size);  //  Calling sorting function to sort array.
	
	cout<<"Array after sorting : ";
	print(array,size);  //  Printing array.
	
	return 0;
}
