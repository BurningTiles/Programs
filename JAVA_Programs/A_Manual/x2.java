/*
 * Program to calculate percentage marks of 6 subjects.
 */
import java.util.*;

//  class x2
class x2 {
	
	public static void main(String[] args) {  //  main method.
	
		Scanner in = new Scanner(System.in);  //  For input from user.
		
		int marks[] = new int[6];  //  Declaring and allocating size to an integer array for storing marks provided by user.
		int sum=0;  //  sum of marks.
		
		System.out.print("Enter marks of 6 subjects : ");
		for(int i=0; i<6; i++){  //  Loop to get marks and calculate total of it.
			marks[i] = in.nextInt();  //  Get marks from user.
			sum += marks[i];  //  Adding marks to sum.
		}
		
		float percent = (float) sum/6;  //  Calculating percentage.
		
		System.out.printf("Total       : %d\nPercentage  : %.2f\n",sum,percent);  //  Printing required output.
		
	}
}
