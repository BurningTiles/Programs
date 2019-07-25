/*
 * Practical 5.1
 * Program to print a string entered in a pyramid form.
 */

import java.util.Scanner;

class Program5_1 {  //  class x9
	
	public static void main(String[] args) {  //  main method
	
		Scanner in = new Scanner(System.in);  //  Object for getting input from user.
		
		System.out.print("Enter line : ");
		
		String str = in.nextLine();  //  Declare and initialize variables and object.
		int length = str.length();
		
		for(int i=0; i<length; i++){  //  Loop for printing.
		
			for (int j=0; j<length-i; j++ )  //  Loop for starting free space.
				System.out.print(" ");
				
			for (int j=0; j<=i; j++)  //  Loop to print string.
				System.out.print( str.charAt(j) + " ");
				
			System.out.println();  //  For new line.
			
		}
		
	}
	
}

/*
 * Output : 
 * Enter line :HelloWorld
 *          H 
 *         H e 
 *        H e l 
 *       H e l l 
 *      H e l l o 
 *     H e l l o W 
 *    H e l l o W o 
 *   H e l l o W o r 
 *  H e l l o W o r l 
 * H e l l o W o r l d 
 */
