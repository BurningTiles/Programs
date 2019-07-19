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
 * mergeSort     (int[],int)  or  mergeSort(int[],int <starting_position>,int <ending_position>)
 * quickSort     (int[],int)  or  quickSort(int[],int <starting_position>,int <ending_position>)
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
		if (flag) break;  //  If array sorted then terminate.
	}
}



//  ======================================================
//  Function to sort array using insertion sort algorithm.
//  ======================================================
void insertionSort(int x[],int n){
	for (int i=1; i<n; i++)  //  Loop to traverse in array.
		for (int j=i; j>0; j--)  //  Second loop move value to it's postion.
			if(x[j]<x[j-1])  //  If it is not in sequence then it will be swapped.
				swap(x[j],x[j-1]);
}



//  ==================================================
//  Function to sort array using merge sort algorithm.
//  ==================================================
void merge(int x[],int start,int mid,int end){  //  Function to merge two parts.
	int left = mid-start+1,right = end-mid;  //  Finding length of first and second part called left and  right.
	int a[left],b[right];  //  Declared two array, a is left part and b is right part.
	
	for (int i=0,j=start ; i<left ; i++,j++)  //  Copy value of first part in a.
		a[i]=x[j];
	for (int i=0,j=mid+1 ; i<right; i++,j++)  //  Copy value of second part in b.
		b[i]=x[j];
		
	for (int i=0,j=0,k=start; i<left || j<right ; ){  //  For loop to put all values in main array.
		if (i<left && j<right){  //  If non of part reached end then compare it and save small value in main array.
			if(a[i]<b[j])
				x[k++]=a[i++];
			else
				x[k++]=b[j++];
		}
		else if(i<left)  //  If second(b) part reached end then save values from first(a) part.
			x[k++]=a[i++];
		else  //  If first(a) part reached end then save values from second(b) part.
			x[k++]=b[j++];
	}
}

void mergeSort(int x[],int start,int end){  //  main merge function to sort array.
	if (start<end){  //  If condition to be executed when array size is greater than 0, else it will be terminated.
		int mid = (start+end)/2;  //  Find mid of start and end.
		mergeSort(x,start,mid);   //  Sort first half part.
		mergeSort(x,mid+1,end);   //  Sort second half part.
		merge(x,start,mid,end);   //  Merge both parts.
	}
}

void mergeSort(int x[],int n){  //  Call main mergeSort function. Cause this function is general function.
	mergeSort(x,0,n-1);
}



//  ==================================================
//  Function to sort array using quick sort algorithm.
//  ==================================================
void quickSort(int x[],int start,int end){
	if(start<end){  //  It will executed if start is lessthan end.
		int i=start+1,j=end;  //  Initialize i and j, value of i is i+1 cause we are considering starting element as pivot.
		while (i<j) {  //  It will be executed till i is lessthan j.
			while (x[i]<x[start] && i<=end ) i++;  //  Start finding element from left to right which is greaterthan pivot. 
			while (x[j]>x[start] && j>start) j--;  //  Start finding element from right to left which is lessthan pivot.
			if (i<j) swap(x[i],x[j]);  //  If x[i] is lessthan x[j] then swap it.
			else swap(x[start],x[j]);  //  Else swap pivot with x[j].
		}
		//  Now pivot is fixed at position so sort remained.
		quickSort(x, start, j-1);  //  Now sort left portion from pivot. 
		quickSort(x, j+1  , end);  //  Sort right portion
	}
}

void quickSort(int x[],int n){  //  Calling main quickSort function.
	quickSort(x,0,n-1);
}




#endif
