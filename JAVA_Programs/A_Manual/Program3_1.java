/* 
 * Practical 3.1
 * This program to accept a line and check how many consonants and vowels are there in line.
 */

//  To use Scanner class first need to import Scanner class into our program.
import java.util.Scanner;

class Program3_1 {

	public static void main(String[] args) {
	
		Scanner in = new Scanner(System.in);  //  Creating Scanner class object(in) and allocating it for System input.
		
		int vowels = 0, consonants = 0;  //  variables to store number of consonants and vowels
		char temp;  //  To store character of string for temporary usage.
		
		System.out.println("Enter a line : ");   
		String input = in.nextLine();  //  Get line from user by calling nextLine method of Scanner object in.
		
		input = input.toLowerCase();  //  Converting string to lower case so don't need to check for capital and small both.
		
		for( int i=0 ; i<input.length() ; i++ ) {  //  Loop to traverse in string.
		
			temp = input.charAt(i);  //  storing i th char of string into temp.
		
			if( temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u' ) { vowels++; }  //  Checking and incrementing number of vowels.
			else if(temp>='a' && temp<='z') { consonants++; }  //  Checking and incrementing number of consonants.
		
		}
		
		//  Printing output.
		System.out.println("In given line : \nNo of consonants : " + consonants + "\nNo of vowels     : " + vowels);	
	
	}

}

/*
 * Output : 
 * Enter a line : 
 * Hello everyone, Welcome to SOCET.
 * In given line : 
 * No of consonants : 15
 * No of vowels     : 12
 */
