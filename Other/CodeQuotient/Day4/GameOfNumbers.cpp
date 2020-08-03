/*
 * Author : BurningTiles
 */

#include <iostream>
using namespace std;

int main(){
    int n, temp, ans=0;
    cin >> n;

    while(n-- && cin >> temp) ans = ans ^ temp;

    (ans)? cout << "AMAN" : cout << "JASBIR";
    
    return 0;
}

/*
Aman and Jasbir are very intelligent guys of their batch. Today they are playing a game "Game of Numbers".

Description of game: 

There are N numbers placed on a table.
Since two players are playing the game, they will make their moves alternatively.
In one move a player can perform the following operation.
A player will choose a number from the table and will replace that number with one of its divisor. For example, 6 can be replaced with 1, 2, or 3 (since these are the divisors of 6). Similarly, 12 can be replaced with 1, 2, 3, 4 or 6.
It is mandatory that the player has to replace the number.
A player cannot put back the same number on table.
As 1 does not have any divisor other than itself, a player cannot replace 1 with any other number. So soon a situation will arise when there will be only all 1s on the table. In that situation the player will not be able to make any move. The player who will not be able to make the move, loses.
Both the players are masters of this game. So they will play the game optimally.
Aman will make the first move of the game.
You will be given N integers that are on the table. You have to predict, who will win the game - Aman or Jasbir.


Input Format
First line contains information about the numbers present of the table, denoted by N
Second line contains N integers delimited by space - A1 A2 A3 A4 ......... AN

Output Format
Print the name of the player who will win the game in upper case i.e. AMAN or JASBIR.

Constraints
1 <= N <= 100000
0 < Ai <= 10000 
A player cannot replace more than 1 number in one move. 
Players move alternate and a player cannot pass or make no move. 
A number cannot be replaced itself, i.e. 6 can be replaced with 1, 2 or 3 only , not with 6.
Aman always makes the first move.

Sample Input 1
1
6

Sample Output 1
AMAN

Explanation
There is only one number placed on the table do AMAN will replace it with 1. 
Jasbir will play next. As there is only 1 left on the table. And it cannot be replaced with any other number; he is not able to make any move. 
So he loses the game.

Sample Input 2
2
18 6

Sample Output 2
AMAN

Explanation
There are 2 numbers present on the table. Since every move is the optimal move, Aman will replace 18 with 6. 
Now (6, 6) will be left on the table. Now, whatever move Jasbir will make. Aman will also make the same move. 
So whenever Jasbir will replace any number with 1. In the next move Aman will also replace the other number with 1. 
So both the numbers will be one after Aman's move. So Jasbir will lose the game.
Initial configuration - (18, 6)
AFTER Aman's MOVE - (6, 6)
AFTER Jasbir's MOVE - (6, 3)
AFTER Aman's MOVE - (3, 3)
AFTER Jasbir's MOVE - (1, 3)
AFTER Aman's MOVE - (1, 1)
Now, Jasbir WILL NOT BE ABLE TO MAKE ANY MOVE. So, Aman will WIN.

Sample Input 3
4
24 45 45 24

Sample Output 3
JASBIR

Explanation
In this case, game is already symmetric. Aman has to make the first move. 
So whatever move Aman will make Jasbir will just repeat the same. 
So In the Aman will go out of moves and Jasbir will win the game.
Initial configuration - (24, 45, 45, 24)
AFTER Aman's MOVE - (1, 45, 45, 24)
AFTER Jasbir's MOVE - (1, 45, 45, 1)
AFTER Aman's MOVE - (1, 1, 45, 1)
AFTER Jasbir's MOVE - (1, 1, 1, 1)
Let's see if outcome changes if Aman replaces 24 by 6 instead of 1
Initial configuration - (24, 45, 45, 24)
AFTER Aman's MOVE - (6, 45, 45, 24)
AFTER Jasbir's MOVE - (6, 45, 45, 6)
AFTER Aman's MOVE - (6, 5, 45, 6)
AFTER Jasbir's MOVE - (6, 5, 5, 6)
AFTER Aman's MOVE - (3, 5, 5, 6)
AFTER Jasbir's MOVE - (3, 5, 5, 3)
AFTER Aman's MOVE - (1, 5, 5, 3)
AFTER Jasbir's MOVE - (1, 5, 5, 1)
AFTER Aman's MOVE - (1, 1, 5, 1)
AFTER Jasbir's MOVE - (1, 1, 1, 1)
Now, Aman WILL NOT BE ABLE TO MAKE ANY MOVE. So, Jasbir will WIN. 
It is easy to see that just by mimicking Aman's moves, Jasbir will win.
*/