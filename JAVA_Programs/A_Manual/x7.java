/* 
 * Program to find that given number or string is palindrome or not.
 */

import java.util.*;

class x7 {  //  class x7
	
	public static void main(String[] args){  //  main method.
		
		Scanner in = new Scanner(System.in);  //  Object of Scanner class to get input from user.
		
		System.out.println("Enter data.\n");
		
		String str = in.nextLine();  //  Declaring and initializing variables.
		int length = str.length();
		boolean flag = true;
		
		for(int i=0; i<length/2; i++){  //  Loop for testing is given String is palindrome or not.
			if( str.charAt(i) != str.charAt(length-i-1) ){
				flag = false;
				break;
			}
		}
		
		if (flag)  //  Printing required output.
			System.out.println("\nGiven data is palindrome.\n");
		else
			System.out.println("\nGiven data is not palindrome.\n");
		
	}	
	
}
