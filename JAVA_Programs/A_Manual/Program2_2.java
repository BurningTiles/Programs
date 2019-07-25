/*
 * Practical 2.2
 * Program to find length of string and print second half of the string.
 */

class Program2_2 {

	public static void main(String args[]) {
		
		String str = "Hello everyone, Welcome to SOCET.";  //  Declaring and initializing String refference object. 
		System.out.println("Given string        : " + str);
		
		int length = str.length();  //  getting length of string by using method of String class.
		
		String secondHalf = str.substring( length/2 , length );  //  Storing second half string in other String reference object.
		
		System.out.println("Length of string    : " + length + "\nSecond half string  : " + secondHalf);
		
	}

}


/*
 * Output : 
 * Given string        : Hello everyone, Welcome to SOCET.
 * Length of string    : 33
 * Second half string  : Welcome to SOCET.
 */
