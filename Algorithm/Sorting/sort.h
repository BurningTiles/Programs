/*
 * Header file for sorting algorithms.
 * After including directly pass array to the sorting functiono which you want to use and size array.
 * General function calling is as follows : [algoName]Sort( array_of_integer , size_of_array )
 * Make sure you write proper identifier_name when you call functions.
 * 
 *
 * Summery of functions.
 *
 * swap(int &,int &)
 * selectionSort (int[],int)
 * bubbleSort    (int[],int)
 */

#ifndef SORT_H
#define SORT_H


// Creating swap fuction, which is used in many sorting functions.
void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}



//  ======================================================
//  Function to sort array using selection sort algorithm.
//  ======================================================
void selectionSort(int x[],int n){
	for (int i=0; i<n; i++)  //  First for loop for iterations.
		for (int j=i+1; j<n; j++)  //  Second for loop set minimum value at corresponding place.
			if (x[j]<x[i])  //  Comparing value and swap if required.
				swap(x[j],x[i]);
}



//  ===================================================
//  Function to sort array using bubble sort algorithm.
//  ===================================================
void bubbleSort(int x[],int n){
	for (int i=0; i<n-1; i++){  //  First loop for iterations.
		bool flag = true;  //  Flag to check if array sorted then loop will terminated.
		for (int j=0; j<n-i-1; j++){  //  Loop for comparing values.
			if(x[j]>x[j+1])  //  Compare and swap value if required.
				swap(x[j],x[j+1]);
			flag = false;  //  Change flag.
		}
		if(flag) break;  //  If array sorted then terminate.
	}
}


#endif
