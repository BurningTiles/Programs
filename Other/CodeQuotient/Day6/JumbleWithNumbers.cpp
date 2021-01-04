/**
 * Author  : BurningTiles
 * Created : 2020-08-06 21:38:38
**/ 
 
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t1, t2, n, mjn=1, counter=0;
	if(!(cin >> t1 >> t2 >> n)){
		cout << "Invalid Input";
		return 0;
	}
	for(int i=1; mjn<t2; ++i){
		mjn = i * (i*2-1);
		if( mjn>=t1 && mjn<= t2 ){
			++counter;
			if(counter == n){
				cout << mjn;
				return 0;
			}
		}
	}
	cout << "No number is present at this index";
	return 0;
}

/**
In NASA, two researchers, Mathew and John, started their work on a new planet, but while practicing research they faced a mathematical difficulty. In order to save the time they divided their work.

So scientist Mathew worked on a piece and invented a number computed with the following formula:

A Mathew number is computed as follows using the formula:

H(n) = n(2n-1)

And scientist John invented another number which is built by the following formula which is called John number.

T(n) = n(n+1)/2

Now Mathew and John are jumbled while combining their work. Now help them combine their research work by finding out number in a given range that satisfies both properties. Using the above formula, the first few Mathew-John numbers are: 1 6 15 28 …




Input Format
Input consists of 3 integers T1, T2, M separated by space.

T1 and T2 are lower and upper limits of the range. The range is inclusive of both T1 and T2. Find Mth number in range [T1, T2] which is actually a Mathew-John number.




Output Format
For Valid Input, Print Mth number from formed sequence between T1 and T2 (inclusive) Or "No number is present at this index".

For Invalid Input, print "Invalid Input"




Constraints
0 < T1 < T2 < 1000000



Sample Input 1
90 150 2

Sample Output 1
120



Sample Input 2
20 80 6

Sample Output 2
No number is present at this index



Sample Input 3
-5 3 a

Sample Output 3
Invalid Input
**/
