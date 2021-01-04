/**
 * Author  : BurningTiles
 * Created : 2020-08-08 00:21:41
**/ 

#include <stdio.h>

int main(){
	int x[10]={0}, ans[6], temp, p=0;
	
	for(int i=0; i<9; ++i){
		scanf("%d,",&temp);
		if(temp<6) ++p;
		++x[temp];
	}
	if(x[2] && x[4] && x[0]>3)
		printf("24:00:00");
	else if(x[0]==9)
		printf("Impossible");
	else{
		for(int i=0; i<6; ++i){
			switch(i){
				case 0:
					if(p>3)
						p=2;
					else
						p=1;
					break;
				case 1:
					if(ans[0]==2)
						p=3;
					else
						p=9;
					break;
				case 2:
					p=5;
					break;
				case 3:
					p=9;
					break;
				case 4:
					p=5;
					break;
				case 5:
					p=9;
					break;
			}
			while(p>=0 && x[p]==0)--p;
			if(p==-1){
				printf("Impossible");
				return 0;
			}
			ans[i]=p;
			--x[p];
		}
	}
	printf("%d%d:%d%d:%d%d",ans[0],ans[1],ans[2],ans[3],ans[4],ans[5]);
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
