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
	int array[]={23,24,72,44,17,32,38,89,58,84,40,28,87,2,46,96,92,26,75,86};  //  Declaring an array with values.
	int size = sizeof(array)/sizeof(int);  //  Finding size of array.
	
	cout<<"Array before sorting : ";
	print(array,size);  //  Printing array.
	
	insertionSort(array,size);  //  Calling sorting function to sort array.
	
	cout<<"Array after sorting : ";
	print(array,size);  //  Printing array.
	
	return 0;
}
