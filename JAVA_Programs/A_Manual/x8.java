/* 
 * Program to count vowels for all sentences.
 */

import java.util.*;

class x8 {  //  class x8
	
	public static void main(String[] args){  //  main method.
		
		Scanner in = new Scanner(System.in);  //  Object of Scanner class to get input from user.
		
		
		
		System.out.println("Enter your text.\nFor stop type quit.\n");
		
		int count = 0;  // Declaring variables.
		String str = in.nextLine();  //  Getting first input.
		
		while ( !("quit".equals(str)) ){  //  Checking input for termination.
			//  Loop for getting text from user till input is available.
			
			char ch;  //  Temp variable for storing.
			str = str.toLowerCase();
			
			for (int i=0; i<str.length() ; i++){  //  Loop to traverse in string.
				
				ch = str.charAt(i);  //  Storing char from string for testing.
				
				if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )  //  Condition for testing.
					count++;
					
			}
			str = in.nextLine();  //  Getting next line from user.
			
		}
		
		System.out.println("\nThere are total " + count + " vowels.\n");  // Printing result.
		
	}	
	
}
