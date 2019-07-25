/* 
 * Practical 4.2
 * Program to count vowels for all sentences.
 */
 
import java.util.Scanner;

class Program4_2 {
	
	public static void main(String[] args){  //  main method.
		
		Scanner in = new Scanner(System.in);  //  Object of Scanner class to get input from user.
		
		System.out.println("Enter your text.\nTo stop type quit.\n");
		
		int count = 0;  // Declaring variables.
		String str = in.nextLine();  //  Getting first input.
		
		while ( !("quit".equals(str)) ){  //  Checking input for termination.
			//  Loop for getting text from user till input is available.
			
			char ch;  //  Temp variable for storing.
			int vowels = 0;
			str = str.toLowerCase();
			
			for (int i=0; i<str.length() ; i++){  //  Loop to traverse in string.
				
				ch = str.charAt(i);  //  Storing char from string for testing.
				
				if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )  //  Condition for testing.
					vowels++;
					
			}
			System.out.println(vowels + " vowels in above line.\n");
			count += vowels;
			str = in.nextLine();  //  Getting next line from user.
			
		}
		
		System.out.println("\nThere are total " + count + " vowels.\n");  // Printing result.
		
	}	
	
}

/*
 * Output : 
 * Enter your text.
 * To stop type quit.
 *
 * Hello...
 * 2 vowels in above line.
 * 
 * Welcome to SOCET.
 * 6 vowels in above line.
 *
 * Today is a beautiful day...
 * 10 vowels in above line.
 *
 * quit
 *
 * There are total 18 vowels.
 */
