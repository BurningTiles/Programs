/* 
 * This program to accept a line and check how many consonants and vowels are there in line.
 */
 
import java.util.*;

class x5 {

	public static void main(String[] args) {
	
		Scanner in = new Scanner(System.in);  //  For input from user.
		
		int vowels = 0, consonants = 0;  //  variables to store number of consonants and vowels
		char temp;  //  To store character of string for temporary usage.
		
		System.out.println("Enter a line : ");   
		String input = in.nextLine();  //  Get line from user.
		
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
