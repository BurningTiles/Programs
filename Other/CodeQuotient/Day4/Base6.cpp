/*
 * Author : BurningTiles
 */

#include <iostream>
using namespace std;

int sumCalc(int n){
    int x=0;
    while(n){
        x += n%6;
        n /= 6;
    }
    return x;
}

int main(){
    int n, counter=0;
    cin >> n;
    int x[n];
    char temp;

    cin >> x[0];
    x[0] = sumCalc(x[0]);
    
    for(int i=1; i<n; ++i){
        cin >> temp >> x[i];
        x[i] = sumCalc(x[i]);
    }

    for(int i=0; i<n-1; ++i)
        for(int j=i+1; j<n; ++j)
            if(x[i]>x[j]) ++counter;
    
    cout << counter;

    return 0;
}

/*
Given a sequence of distinct numbers a1, a2, ….. an, an inversion occurs if there are indices i<j such that ai > aj. For example, in the sequence 2 1 4 3 there are 2 inversions (2 1) and (4 3).

The input will be a main sequence of N positive integers. From this sequence, a Derived Sequence will be obtained using the following rule. The output is the number of inversions in the derived sequence.

Rule for forming derived sequence

An integer may be represented in base 6 notation. In base 6, 10305 is 1x6^4 + 3x6^2 + 5x6^0 =1409. Note that none of the digits in that representation will be more than 5.

The sum of digits in a base 6 representation is the sum of all the digits at the various positions in the representation. Thus for the number 1409, the representation is 10305, and the sum of digits is 1+0+3+0+5=9. The sum of digits may be done in the decimal system, and does not need to be in base 6.

The derived sequence is the sum of the digits when the corresponding integer is represented in the base 6 form number will be expressed in base 6, and the derived sequence is the sum of the digits of the number in the base 6 representation.


Input Format
The first line of the input will have a single integer, which will give N.
The next line will consist of a comma separated string of N integers, 
which is the main sequence

Output Format
The number of inversions in the derived sequence formed from the main sequence.

Constraints
N <= 50
Integers in sequence <= 10^7

Sample Input 1
5
55, 53, 88, 27, 33

Sample Output 1
2

Explanation
The number of integers is 5, as specified in the first line. The given sequence 
is 55, 53, 88, 27, 33.
The base6 representation is 131, 125, 224, 43, 53. The derived sequence is 
5,8,8,7,8 (corresponding to the sum of digits). 
The number of inversions in this is 2, namely (8, 7), (8, 7)

Sample Input 2
8
120,21,47,64,72,35,18,98

Sample Output 2
11

Explanation
The base 6 representation of this is 320,33,115,144,200,55,30,242, and the 
derived sequence (sum of digits) is 5,6,7,9,2,10,3,8. 
The number of inversions is 11 (5,2), (5,3),(6,2) (6,3), (7,2), (7,3) 
(9,2),(9,3) (9,8),(10,3), (10,8)
*/