/*
 * Header file for sorting algorithms.
 * After including directly pass array to the sorting functiono which you want to use and size array.
 * General function calling is as follows : [algoName]Sort( array_of_integer , size_of_array )
 * Make sure you write proper identifier_name when you call functions.
 * It contains all generic functions so array of any data type can be sorted in it.
 * 
 *
 * Summery of functions.
 *
 * swap( value1 , value2 )
 * selectionSort (array[],length)
 * bubbleSort    (array[],length)
 * mergeSort     (array[],length)  or  mergeSort(array[] , <starting_position> , <ending_position>)
 * quickSort     (array[],length)  or  quickSort(array[] , <starting_position> , <ending_position>)
 */

#ifndef SORT_H
#define SORT_H

#define __iterator long long int

// Creating swap fuction, which is used in many sorting functions.
template<typename __data_type>
void swap(__data_type &a,__data_type &b){
	__data_type temp = a;
	a = b;
	b = temp;
}



//  ======================================================
//  Function to sort array using selection sort algorithm.
//  ======================================================
template<typename __data_type>
void selectionSort(__data_type x[],__iterator n){
	for (__iterator i=0; i<n; i++){  //  First for loop for iterations.
		__iterator min=i;
		for (__iterator j=i+1; j<n; j++)  //  Second for loop to find minimum value.
			if (x[j]<x[min]) 
				min=j;
		swap(x[i],x[min]);  //  Swap value with min value.
	}
}



//  ===================================================
//  Function to sort array using bubble sort algorithm.
//  ===================================================
template<typename __data_type>
void bubbleSort(__data_type x[],__iterator n){
	for (__iterator i=0; i<n-1; i++){  //  First loop for iterations.
		bool flag = true;  //  Flag to check if array sorted then loop will terminated.
		for (__iterator j=0; j<n-i-1; j++){  //  Loop for comparing values.
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
template<typename __data_type>
void insertionSort(__data_type x[],__iterator n){
	for (__iterator i=1; i<n; i++){  //  Loop to traverse in array.
		__iterator j=i-1;
		__data_type key=x[i];  //  Initializing j and storing element in key which will be inserted.
		while(j>=0 && x[j]>key){  //  While key is less than values in list move it.
			x[j+1]=x[j];  
			j--;
		}
		x[j+1]=key;  //  Insert element at it's place.
	}
}



//  ==================================================
//  Function to sort array using merge sort algorithm.
//  ==================================================
template<typename __data_type>
void merge(__data_type x[],__iterator start,__iterator mid,__iterator end){  //  Function to merge two parts.
	__iterator left = mid-start+1,right = end-mid;  //  Finding length of first and second part called left and  right.
	__data_type a[left],b[right];  //  Declared two array, a is left part and b is right part.
	
	for (__iterator i=0,j=start ; i<left ; i++,j++)  //  Copy value of first part in a.
		a[i]=x[j];
	for (__iterator i=0,j=mid+1 ; i<right; i++,j++)  //  Copy value of second part in b.
		b[i]=x[j];
		
	for (__iterator i=0,j=0,k=start; i<left || j<right ; ){  //  For loop to put all values in main array.
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

template<typename __data_type>
void mergeSort(__data_type x[],__iterator start,__iterator end){  //  main merge function to sort array.
	if (start<end){  //  If condition to be executed when array size is greater than 0, else it will be terminated.
		__iterator mid = (start+end)/2;  //  Find mid of start and end.
		mergeSort(x,start,mid);   //  Sort first half part.
		mergeSort(x,mid+1,end);   //  Sort second half part.
		merge(x,start,mid,end);   //  Merge both parts.
	}
}

template<typename __data_type>
void mergeSort(__data_type x[],__iterator n){  //  Call main mergeSort function. Cause this function is general function.
	mergeSort(x,0,n-1);
}



//  ==================================================
//  Function to sort array using quick sort algorithm.
//  ==================================================
template<typename __data_type>
void quickSort(__data_type x[],__iterator start,__iterator end){
	if(start<end){  //  It will executed if start is lessthan end.
		__iterator i=start+1,j=end;  //  Initialize i and j, value of i is i+1 cause we are considering starting element as pivot.
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

template<typename __data_type>
void quickSort(__data_type x[],__iterator n){  //  Calling main quickSort function.
	quickSort(x,0,n-1);
}




#endif
