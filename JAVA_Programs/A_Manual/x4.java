/*
 * Program to find length of string and print second half of the string.
 */
 
import java.util.*;

class x4 {

	public static void main(String[] argss) {
		
		Scanner in = new Scanner(System.in);
		
		System.out.println("Enter a string : ");
		String inStr = in.nextLine();  //  Declaring string variable and getting input from user using nextLine method of Scanner object(in). 
		int length = inStr.length();  //  getting length of string by using method of string class.
		
		String secondHalf = inStr.substring( length/2 , length );  //  Storing second half string in other variable of string type.
		
		System.out.print("Length of string    : " + length + "\nSecond half string  : " + secondHalf);
		
	}

}

/*  
 * Note:  In java strings are sequence of Unicode characters.
 */
