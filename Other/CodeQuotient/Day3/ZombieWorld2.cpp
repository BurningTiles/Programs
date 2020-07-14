/*
 * Author : BurningTiles
 */

#include <iostream>
using namespace std;

int main(){
    int B, N, temp;
    cin >> B >> N;

    while(N-- && cin >> temp) B -= ++temp/2;
    if(cin.fail())
        cout << "Invalid Input";
    else
        (B>0)? cout << "YES" : cout << "NO";
    
    return 0;
}


/*
One day Bob is playing Zombie World video game. In Zombie World game each round will contain N zombie's and each zombie's energy is Zi (where 1<=i<=N). Bob will start the round with B energy. In order to move to the next level Bob need to kill all the N zombie's but Bob can select any one among N Zombie's. If energy of Bob (B) is less than Zombie energy (Zi) then Bob will die and lose the round else Bob will won, during the fighting with zombie, Bob will lose his energy by (Zi%2)+(Zi/2). At any point of game Bob will play optimally. Now your task is to find out whether Bob can reach to the next level or not.

Input Format
First line will contains B and N, separated by space, where B is the energy of Bob and N is the number of Zombie.
Next line will contain N spaced integers each will represent the energy of zombie. Zi, where Zi is a list containing energy of zombies separated by space

Output Format
For Valid Input, Print "YES" or "NO" depending upon whether Bob can reach the next level or not.
For Invalid Input,print "Invalid Input"


Constraints
1 <= N <= 10^4
1 <= B <= 10^9
1 <= Zi <= 10^5
Note: For this problem all the divisions are integer divisions.


Sample Input 1
35 3
5 9 6

Sample Output 1
YES

Sample Input 2
456 68
a

Sample Output 2
Invalid Input

Sample Input 3
4 4
1 3 2 4

Sample Output 3
NO
*/