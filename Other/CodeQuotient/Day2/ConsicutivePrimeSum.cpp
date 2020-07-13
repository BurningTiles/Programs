/*
 * Author : BurningTiles
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<int> prime;
    prime.push_back(2);

    int n;
    cin >> n;

    if(n < 5){
        cout << "0";
        return 0;
    }

    bool flag;
    for(int i=3; i<=n; i+=2){
        flag = true;
        for(int j=0; j<prime.size() && j<=sqrt(i); j++)
            if(i%prime[j] == 0){
                flag = false;
                break;
            }
        if(flag)
            prime.push_back(i);
    }

    int sum = 2,counter = 0;
    for(int i=1; i<prime.size(); i++){
        sum += prime[i];
        if(find(prime.begin(),prime.end(),sum) != prime.end()) ++counter;
    }

    cout << counter;

    return 0;
}


/*
Some prime numbers can be expressed as Sum of other consecutive prime numbers. For example

5 = 2 + 3

17 = 2 + 3 + 5 + 7

41 = 2 + 3 + 5 + 7 + 11 + 13

Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.

Write code to find out number of prime numbers that satisfy the above mentioned property in a given range.

Input Format
First line contains a number N

Output Format
Print the total number of all such prime numbers which are less than or equal to N.

Sample Input 1
20

Sample Output 1
2

Explanation
(Below 20, there are 2 such numbers: 5 and 17).
5=2+3
17=2+3+5+7

Sample Input 2
15

Sample Output 2
1

Explanation
(Below 15, there is 1 such number: 5).
5=2+3
*/