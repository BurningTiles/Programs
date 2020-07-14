/*
 * Author : BurningTiles
 */

#include <iostream>
using namespace std;

int main(){
    char x[20];
    cin >> x;
    int n=0,i=0,j;

    while(x[n] != '\0') ++n;
    while(++i<n){
        if(x[i] < x[i-1]){
            j = i-1;
            do {
                --x[j];
            }while(x[j] < x[j-1] && j>=0 && --j);
            while(i < n) x[i++] = '9';
            break;
        }
    }

    if(x[0] != '0') cout << x[0];
    for(i=1; i<n; ++i ) cout << x[i];
    return 0;
}


/*
Some numbers such as 7, 234, 12378 have the digits that are non-decreasing when we read them from left to right. In this problem, we want to find the largest such number less than or equal to a given number N.


Input Format
Integer N


Output Format
Largest integer M ≤ N that has its digits non-decreasing. The output should not contain leading zeros.


Constraints
N <= 10^18


Sample Input 1
89

Sample Output 1
89

Explanation
89 itself has non-decreasing digits.

Sample Input 2
549

Sample Output 2
499

Explanation
From 500 to 549, the integers have 5 as the leading digit and the
second digit must be less than or equal to 4. But then, such a 
number cannot have its digits non decreasing.
*/