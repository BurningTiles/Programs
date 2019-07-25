/* 
 * Practical 3.2
 * Program to count the number of words that start with capital letters.
 */
 
import java.util.Scanner;

class Program3_2 {  

	public static void main(String[] args){  //  main method.
	
		Scanner in = new Scanner(System.in);  //  Object for getting input from user
		
		System.out.println("Enter a line : ");
		String str = in.nextLine();  // Declaring and initializing string.
		
		int count = 0;  //  To store no of words start with capital letter.
		
		boolean flag = true;  //  Flag for conditions.
		char ch;  //  Temp variable for storing.
		
		for (int i=0; i<str.length() ; i++){  //  Loop to traverse in string.
		
			ch = str.charAt(i);  //  Storing char from string for testing.
			
			if( flag == true && ch>='A' && ch<='Z' ){  //  Conditions to find word with capital letters.
				count++;
				flag = false;
			}
			else if( (ch<'A' || ch>'Z') && (ch<'a' || ch>'z') )  //  If ch is not alphabet then enable flag.
				flag = true;
			else
				flag = false;
				
		}
		
		System.out.println("There are total " + count + " words starts with capital letters.\n");  // Printing result.
	
	}
	
}

/*
 * Output : 
 * Enter a line : 
 * Hello everyone, Welcome to SOCET.
 * There are total 3 words starts with capital letters.
 */
