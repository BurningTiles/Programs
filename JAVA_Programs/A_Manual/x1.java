/*
 * Write a program to convert rupees to dollar. (60 rupees = 1 dollar)
 */

// importing java utils for Scanner class to get input from user.
import java.util.*;

// class x1 created. class name need to be same as file name (exclude extension).
class x1 {
	public static void main(String[] args) {  // main method(function). Format should be maintained else not work. 
		
		Scanner in = new Scanner(System.in);   //  Creating Scanner class object(in) and allocating it for System input.
		System.out.print("Enter rupees : "); //  For printing output: System.out class print method called
		int rs = in.nextInt();  //  declaring int variable and getting input from user by calling nextInt method of Scanner object in.
		float dollar = (float) rs/60;  //  Calculating to convert rs to dollar.
		System.out.printf("\n%d Rs = %.2f Dollar\n",rs,dollar);  //  Printing
		
	}
}
