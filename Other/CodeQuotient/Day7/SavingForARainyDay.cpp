/**
 * Author  : BurningTiles
 * Created : 2020-08-06 22:45:05
**/ 
 
#include <bits/stdc++.h>
using namespace std;

int main(){
	double m, t, r ;
	cin >> m >> t >> r;
	double ans=0, reqAmount=m, amt, interest;
	for(int i=0; i<t; ++i){
		amt = reqAmount/(1+r/1200);
		reqAmount += (m-reqAmount+amt);
	}
	reqAmount -= m;
	amt = double(int(reqAmount+.5));
	if(amt > reqAmount)
		cout << int(reqAmount+.5);
	else
		cout << int(reqAmount);
	return 0;
}

/**
By nature, an average Indian believes in saving money. Some reports suggest that an average Indian manages to save approximately 30+% of his salary. Dhaniram is one such hard working fellow. With a view of future expenses, Dhaniram resolves to save a certain amount in order to meet his cash flow demands in the future.



Consider the following example: Dhaniram wants to buy a TV. He needs to pay Rs 2000/- per month for 12 installments to own the TV. If let's say he gets 4% interest per annum on his savings bank account, then Dhaniram will need to deposit a certain amount in the bank today, such that he is able to withdraw Rs 2000/- per month for the next 12 months without requiring any additional deposits throughout.



Your task is to find out how much Dhaniram should deposit today so that he gets assured cash flows for a fixed period in the future, given the rate of interest at which his money will grow during this period.


Input Format
First line contains desired cash flow M
Second line contains period in months denoted by T
Third line contains rate per annum R expressed in percentage at which deposited amount will grow


Output Format
Print total amount of money to be deposited now rounded off to the nearest integer


Constraints:
M > 0
T > 0
R >= 0
Calculation should be done upto 11-digit precision




Sample Input 1
500
3
12

Sample Output 1
1470



Sample Input 2
6000
3
5.9

Sample Output 2
17824



Sample Input 3
500
2
0

Sample Output 3
1000
**/
