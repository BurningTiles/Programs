/*
 * Author : BurningTiles
 */

#include <iostream>
using namespace std;

int main(){
    int n, k, op, p, sum=0, maxd=0, temp;
    cin >> n >> k;
    op = k*2;
    int A[n],B[n];

    for (int i=0; i<n; ++i)
        cin >> A[i];
    for (int i=0; i<n; ++i){
        cin >> B[i];
        p = A[i]*B[i];
        sum += p;
        if(p > 0)
            if(A[i] > 0)
                temp = p-((A[i]-op)*B[i]);
            else
                temp = p-((A[i]+op)*B[i]);
        else
            if(A[i] > 0)
                temp = p-((A[i]+op)*B[i]);
            else
                temp = p-((A[i]-op)*B[i]);
        if(temp > maxd)
            maxd = temp;
    }

    cout << sum-maxd;
    
    return 0;
}


/*
The task is to find the minimum sum of Products of two arrays of the same size, given that k modifications are allowed on the first array. In each modification, one array element of the first array can either be increased or decreased by 2.

Note: The product sum is Summation (A[i]*B[i]) for all i from 1 to n where n is the size of both arrays

Input Format
First line of the input contains n and k delimited by whitespace
Second line contains the Array A (modifiable array) with its values delimited by spaces
Third line contains the Array B (non-modifiable array) with its values delimited by spaces

Output Format
Output the minimum sum of products of the two arrays

Constraints:
1 ≤ N ≤ 10^5
0 ≤ |A[i]|, |B[i]| ≤ 10^5
0 ≤ K ≤ 10^9

Sample Input 1
3 5
1 2 -3
-2 3 -5

Sample Output 1
-31

Explanation
Here total numbers are 3 and total modifications allowed are 5. So we modified A[2], which is -3 and increased it by 10 (as 5 modifications are allowed). 
Now final sum will be (1 * -2) + (2 * 3) + (7 * -5)
-2 + 6 - 35
-31
-31 is our final answer.

Sample Input 2
5 3
2 3 4 5 4
3 4 2 3 2

Sample Output 2
25

Explanation
Here total numbers are 5 and total modifications allowed are 3. So we modified A[1], which is 3 and decreased it by 6 (as 3 modifications are allowed).
Now final sum will be
(2 * 3) + (-3 * 4) + (4 * 2) + (5 * 3) + (4 * 2)
6 - 12 + 8 + 15 + 8
25
25 is our final answer. 
*/