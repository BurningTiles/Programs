/**
 * Author  : BurningTiles
 * Created : 2020-08-07 16:06:52
**/ 
 
#include <bits/stdc++.h>
using namespace std;

vector <int> x;

int get(int limit){
	if(x[0] > limit)
		return -1;
	if(limit < 9)
		for(int i=0; i<x.size(); ++i)
			if(x[i]>limit){
				int temp = x[i-1];
				x.erase(x.begin()+i-1);
				return temp;
			}
	int temp = x.back();
	x.pop_back();
	return temp;
}

int main(){
	int ans[6], temp, i;
	char ch;

	cin >> temp;
	x.push_back(temp);
	for(i=1; i<9; ++i){
		cin >> ch >> temp;
		x.push_back(temp);
	}

	if(x[4]<6){
		ans[0] = get(2);
		if(ans[0]==2){
			if(x[0] || x[1] || x[2] || x[3])
				ans[1] = get(3);
			else
				ans[1] = get(4);
			if(ans[1]==4){
				cout << "24:00:00";
				return 0;
			}
		}
		else
			ans[1] = get(9);
	}
	else{
		ans[0] = get(1);
		ans[1] = get(9);
	}
	
	ans[2] = get(5);
	ans[3] = get(9);
	ans[4] = get(5);
	ans[5] = get(9);

	for(int i=0; i<6; ++i)
		if(ans[i] == -1){
			cout << "Impossible";
			return 0;
		}
	cout << ans[0] << ans[1] << ':' << ans[2] << ans[3] << ':' << ans[4] << ans[5];

	return 0;
}

/**
The objective is to form the maximum possible time in the HH:MM:SS format using any six of nine given single digits (not necessarily distinct)

Given a set of nine single (not necessarily distinct) digits, say 0, 0, 1, 3, 4, 6, 7, 8, 9, it is possible to form many distinct times in a 24 hour time format HH:MM:SS, such as 17:36:40 or 10:30:41 by using each of the digits only once. The objective is to find the maximum possible valid time (00:00:01 to 24:00:00) that can be formed using some six of the nine digits exactly once. In this case, it is 19:48:37.


Input
A line consisting of a sequence of 9 (not necessarily distinct) single digits
(any of 0-9) separated by commas. The sequence will be non-decreasing

Output
The maximum possible time in a 24 hour clock (00:00:01 to 24:00:00) in a HH:MM:SS 
form that can be formed by using some six of the nine given digits (in any order)
precisely once each. If no combination of any six digits will form a valid time, 
the output should be the word Impossible

Sample Input 1
0,0,1,1,3,5,6,7,7

Sample Output 1
17:57:36

Explanation
The maximum valid time in a 24 hour clock that can be formed using some 
six of the 9 digits precisely once is 17:57:36

Sample Input 2
3,3,3,3,3,3,3,3,3

Sample Output 2
Impossible

Explanation
No set of six digits from the input may be used to form a valid time.
**/
