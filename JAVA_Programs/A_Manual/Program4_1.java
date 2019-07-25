/* 
 * Practical 4.1
 * Program to find that given number or string is palindrome or not.
 */

import java.util.Scanner;

class Program4_1 {  //  class x7
	
	public static void main(String[] args){  //  main method.
		
		Scanner in = new Scanner(System.in);  //  Object of Scanner class to get input from user.
		
		System.out.print("Enter string or number : ");
		
		String str = in.nextLine();  //  Declaring and initializing string.
		int length = str.length();
		boolean flag = true;
		
		for(int i=0; i<length/2; i++){  //  Loop for testing is given String is palindrome or not.
			if( str.charAt(i) != str.charAt(length-i-1) ){
				flag = false;
				break;
			}
		}
		
		if (flag)  //  Printing required output.
			System.out.println("It is palindrome.\n");
		else
			System.out.println("It is not palindrome.\n");
		
	}	
	
}

/* 
 * Output : 
 * Enter string or number : malayalam
 * It is palindrome.
 */
