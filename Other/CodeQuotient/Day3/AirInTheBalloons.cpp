/*
 * Author : BurningTiles
 */

#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    double b[n], rate, sum=0;

    for(int i=0; i<n; ++i){ 
        cin >> b[i];
        b[i] = pow(b[i],3)*3.14*4/3;
    }
    cin >> rate;
    rate = (100-rate)/100;
    sort(b,b+n);

    for(int i=0; i<n; ++i){
        b[i] *= pow(rate,n-i-1);
        sum += b[i];
    }

    printf("%.2f",trunc(sum*100)/100);
    return 0;
}


/*
You have been given 'N' number of spherical Balloons of different radius when filled. You have to fill one balloon per day and the last balloon will be filled on Nth day. There is some rate of air reduction 'K' per day from each balloon. Fill the balloons in such an order so that the sum of the volume of all the balloons is maximum on the day when all the balloons are filled.


Input Format
First Line is an integer N giving the number of balloons.
Second line gives space separated N positive real numbers with up to 1 decimal place giving the radii of the balloons.
Third line gives K, the rate of reduction in the volume of air as a percentage.


Output Format
Maximum sum of volumes of all the balloons on the Nth day when all the balloons are filled. Take 3.14 as the value of PI and give the answer to two decimal places (truncated by ignoring all the decimals from third onwards). Note that the truncation should happen only after computing the volume of all the balloons on the final day to maximum precision.


Constraints
Number of balloons <= 10
Radius of balloons <=200

Sample Input 1
5
8 4 6 10 3
10

Sample Output 1
7117.88

Explanation
If we fill the balloons in the order 3, 4, 6, 8, 10, their volumes
on the fifth day are respectively
74.165544
195.33312
732.4992
1929.216
4186.6666 67
And their sum is 7117.880531. Truncating the value two decimal 
places, we obtain 7117.88

Sample Input 2
7
3. 5 9 4 6.6 7 11 9.1
12.5

Sample Output 2
12555.35

Explanation
If we inflate the balloons in the order 3.5 4 6.6 7 9 9.1 11, their volumes
on the seventh day would be respectively
80.56025567
137.4322396
705.5574848
962.0256771
2336.74875
2760.581763
5572.453333 
The sum of these volumes is 12555.3595 and truncating to two decimal 
places, we obtain 12555.35
*/