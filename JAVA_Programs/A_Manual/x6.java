/* 
 * Program to count the number of words that start with capital letters.
 */

import java.util.*;

class x6 {  // class x6

	public static void main(String[] args){  //  main method.
	
		Scanner in = new Scanner(System.in);  //  Object for getting input from user
		
		String str;  // Declaring variables.
		int count = 0;
		
		System.out.println("Enter your text.\nFor stop enter two times.\n");
		
		do{  //  Loop for getting text from user till input is available.
			
			boolean flag = true;  //  Flag for conditions.
			char ch;  //  Temp variable for storing.
			str = in.nextLine();  //  Getting input from user.
			
			for (int i=0; i<str.length() ; i++){  //  Loop to traverse in string.
			
				ch = str.charAt(i);  //  Storing char from string for testing.
				
				if( flag == true && ch>='A' && ch<='Z' )  //  Conditions to find word with capital letters.
					count++;
				else if( (ch==' ') || (ch==',') || (ch=='.') )
					flag = true;
				else 
					flag = false;
					
			}
			
		} while ( str.length() != 0 );  //  Checking if input is blank then stop the loop.
		
		System.out.println("There are total " + count + " words starts with capital letters.\n");  // Printing result.
	
	}
	
}
