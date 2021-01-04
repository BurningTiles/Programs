/**
 * Author  : BurningTiles
 * Created : 2020-08-07 14:17:45
**/ 
 
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x[n], pointer=0, len=1, lastpoint=0;
	
	for(int i=0; i<n; ++i)
		cin >> x[i];

	for(int i=1; i<n; ++i){
		if(x[i] < x[i-1]){
			if(i-lastpoint > len){
				pointer = lastpoint;
				len = i-lastpoint;
			}
			lastpoint = i;
		}
	}
	if(x[n-1] >= x[n-2]){
		if(n-lastpoint > len){
			pointer = lastpoint;
			len = n-lastpoint;
		}
	}
	for(int i=pointer; i<pointer+len; ++i)
		cout << x[i] << ' ';

	return 0;
}

/**
Given a sequence, the objective is to find the longest progressive sequence arranged in ascending order. Detailed descriptions are as:

A sequence is said to be progressive if it doesn’t decrease at any point in time.

For example 1 1 2 2 is a progressive sequence but 1 2 1 is not a progressive sequence. Let S be the sequence and be represented by L spaced integers Ki, now your task is to find out the first longest progressive sequence present in the given sequence (S).


Input Format
First line will contain T, the length of the sequence and next line will contain T spaced integers Ki (where i = 0,1, …,L).
Line 1 T,where T is the length of the sequence
Line 2 Ki,where Ki is integer in sequence separated by space


Output Format
Line 1 longest progressive sequence present in the given sequence


Constraints
1<=T<=10^6(one million)
1<=Ki<=10^9(one billion)



Sample Input 1
4
1 1 2 1

Sample Output 1
1 1 2



Sample Input 2
5
1 2 1 2 2

Sample Output 2
1 2 2
**/
