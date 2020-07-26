/*
 * Author : BurningTiles
 */

#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    vector<ll> v;
    ll n, k, i, sqrtn, counter=0;
    char x;
    cin >> n >> k;
    sqrtn = sqrt(n);
    
    for(i=1; i<=sqrtn; i++)
        if(n%i == 0){
            ++counter;
            if(counter == k){
                cout << n/i;
                return 0;
            }
            v.push_back(i);
        }

    k = (n/sqrtn == sqrtn)? 2*v.size()-k-1 : 2*v.size()-k;

    (k > v.size())? cout << '1': cout << v[k];
    
    return 0;
}


/*
A positive integer d is said to be a factor of another positive integer N if when N is divided by d, the remainder obtained is zero.

For example, for the number 12, there are 6 factors 1, 2, 3, 4, 6, 12. Every positive integer k has at least two factors, 1 and the number k itself.

Given two positive integers N and k, write a program to print the kth largest factor of N.

Input
The input is a comma separated list of positive integer pairs (N, k)

Output
The kth highest factor of N. If N does not have k factors, the output should be 1.

Constraints
1<N<10000000000. 1<k<600

You can assume that N will have no prime factors which are larger than 13.

Sample Input 1
12,3

Sample Output 1
4

Explanation
N is 12, k is 3. The factors of 12 are (1,2,3,4,6,12). The highest factor is 12 and the third largest factor is 4. The output must be 4

Sample Input 2
30,9

Sample Output 2
1

Explanation
N is 30, k is 9. The factors of 30 are (1,2,3,5,6,10,15,30). There are only 8 factors. As k is more than the number of factors, the output is 1.
*/