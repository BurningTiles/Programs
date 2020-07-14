/*
 * Author : BurningTiles
 */

#include <iostream>
using namespace std;

int main(){
    int N, s;
    cin >> N >> s;
    int eggs[N], sum=0;

    for(int i=0; i<N; ++i){
        cin >> eggs[i];
        sum += eggs[i];
    }

    if(sum > s)
        cout << "Thank you, your order for " << s << " eggs are accepted" << endl;
    else{
        cout << "Sorry, we can only supply " << sum-1 << " eggs" << endl;
        s = sum-1;
    }
    
    for(int i=0; i<N; ++i){
        cout << eggs[i] << ' ';
        if(s >= eggs[i]){
            cout << eggs[i] << ' ' << '0' << endl;
            s -= eggs[i];
        }
        else {
            cout << s << ' ' << eggs[i]-s << endl;
            s = 0;
        }
    }
    return 0;
}


/*
"One Egg" is an egg supply company which supplies eggs to retailers. They have M classes of eggs. Each class can have N number of eggs (N can be same or can vary class to class).

They accept an order via mail for X eggs. In response, they confirm if they can supply the eggs with a "Thank you" note and the number of eggs or with a "Sorry" note and the numbers of eggs they can supply. They also mention the breakdown of eggs by class they will supply. The ordered eggs are adjusted against the different classes with the most number of eggs adjusted first then the balance is adjusted against the second highest and so on.

The company is a bit superstitious as well. If the number of eggs ordered is greater than or equal to the total number of eggs in stock then they retain one egg and responds back with the "Sorry" note with total number of eggs in stock minus one and breakdown of eggs by class.

Note: If the classes have same number of eggs then class entered first should be selected to adjust.


Input Format
First line contains two space-separated integers denoting the respective 
values of M (the number of classes of eggs) and X, the number 
of eggs ordered
The following M lines contain an integer each indicating the number 
of eggs available in each class

Output Format
First line should be, if X is less than total number of Eggs 
then Print "Thank you, your order for X eggs is accepted"
Else if X is greater than or equal to total number of Eggs
then print "Sorry, we can only supply (total number of Eggs in stock -1) eggs"
Then M lines with 3 columns:
First column - Number of eggs available in each class
Second column - Eggs allocated against 
                each class for that order
Third column - Balance Eggs against each class

Constraints
1 ≤ M ≤ 20
N ≥ 1
X ≥ 1

Sample Input 1
5 150
50
15
80
10
5

Sample Output 1
Thank you, your order for 150 eggs are accepted
50 50 0
15 15 0
80 80 0
10 5 5
5 0 5

Explanation
Total order of 150 eggs is less than the total 
number of Eggs 50+15+80+10+5 = 160. Hence the Thank you message. 
150 was first adjusted against Class with first 
highest number of eggs 80. 
Balance of 150-80 = 70 was adjusted against second highest class of 50. 
Balance of 70-50 = 20 then adjusted against 15. 
Balance of 20-15 = 5 then adjusted against 10 leaving behind 5 eggs in that class.

Sample Input 2
4 250
80
50
70
20

Sample Output 2
Sorry, we can only supply 219 eggs
80 80 0
50 50 0
70 70 0
20 19 1

Explanation
Total order of 250 eggs was greater than the total number 
of eggs 80+50+70+20 = 220. Hence the sorry message. 
250 was first adjusted against Class with first highest number of eggs 80. 
Balance of 250-80 = 170 was adjusted against second highest class of 70.
Balance of 170-70 = 100 was then adjusted against 50. 
Balance of 100-50 = 50 then adjusted against 20. 
Since Balance is greater than last 
class of egg all but one egg is left in that last class.
*/