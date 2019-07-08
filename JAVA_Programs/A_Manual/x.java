/*
 * General java file for all classes for easy management.
 * Importing java.util for required classes like Scanner.
 */

import java.util.*; //  If you're writing program in multiple files then need to import it in all.








//==============================================================================================================================================================
//==============================================================================================================================================================
/*
 * Program 1
 * Write a program to convert rupees to dollar. (60 rupees = 1 dollar)
 */

class A {
	public static void main(String[] args) {  // main method(function). Format should be maintained else not work. 
		
		Scanner in = new Scanner(System.in);   //  Creating Scanner class object(in) and allocating it for System input.
		System.out.print("Enter rupees : "); //  For printing output: System.out class print method called
		int rs = in.nextInt();  //  declaring int variable and getting input from user by calling nextInt method of Scanner object in.
		float dollar = (float) rs/60;  //  Calculating to convert rs to dollar.
		System.out.printf("\n%d Rs = %.2f Dollar\n",rs,dollar);  //  Printing
		
	}
}

/*
 * This Program can also be written in different way by using command line arguments.
 */
 
class A1 {
	public static void main(String[] args) {  // main method(function). Format should be maintained else not work. 

		int rs = Integer.parseInt(args[0]);  //  Converting string argument into integer using parseInt method of Integer class.
		float dollar = (float) rs/60;  //  Calculating to convert rs to dollar.
		System.out.printf("\n%d Rs = %.2f Dollar\n",rs,dollar);  //  Printing
		
	}
}








//==============================================================================================================================================================
//==============================================================================================================================================================
/*
 * Program 2
 * Program to calculate percentage marks of 6 subjects.
 */

class B {
	
	public static void main(String[] args) {  //  main method.
	
		Scanner in = new Scanner(System.in);  //  For input from user.
		
		int marks[] = new int[6];  //  Declaring and allocating size to an integer array for storing marks provided by user.
		int sum=0;  //  sum of marks.
		
		System.out.print("Enter marks of 6 subjects : ");
		for(int i=0; i<6; i++){  //  Loop to get marks and calculate total of it.
			marks[i] = in.nextInt();  //  Get marks from user.
			sum += marks[i];  //  Adding marks to sum.
		}
		
		float percent = (float) sum/6;  //  Calculating percentage.
		
		System.out.printf("Total       : %d\nPercentage  : %.2f\n",sum,percent);  //  Printing required output.
		
	}
}

/*
 * This Program can also be written in different way by using command line arguments.
 */

class B1 {
	
	public static void main(String[] args) {  //  main method.
		
		int sum = 0;
		
		for(int i=0; i<args.length; i++)  //  Loop to calculate total of marks.
			sum += Integer.parseInt(args[i]);  //  Adding marks to sum.
		
		float percent = (float) sum/args.length;  //  Calculating percentage.
		
		System.out.printf("Total       : %d\nPercentage  : %.2f\n",sum,percent);  //  Printing required output.
		
	}
}








//==============================================================================================================================================================
//==============================================================================================================================================================
/*
 * Program 3
 * Program to perform mathematical operation on 2 numbers.
 */

class C {
	
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		
		System.out.print("Enter two numbers   : ");
		int num1 = in.nextInt();
		int num2 = in.nextInt();
		
		//  Declaring variables and storing values in it with required mathematical operation.
		int add = num1 + num2;
		int sub = num1 - num2;
		int mul = num1 * num2;
		int div = num1 / num2;
		int mod = num1 % num2;
		
		System.out.println("Addition        : " + add);
		System.out.println("Subtraction     : " + sub);
		System.out.println("Multiplication  : " + mul);
		System.out.println("Division        : " + div);
		System.out.println("Reminder        : " + mod);
				
	}
	
}








//==============================================================================================================================================================
//==============================================================================================================================================================
/*
 * Program 4
 * Program to find length of string and print second half of the string.
 */

class D {

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








//==============================================================================================================================================================
//==============================================================================================================================================================
/* 
 * Program 5
 * This program to accept a line and check how many consonants and vowels are there in line.
 */

class E {

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








//==============================================================================================================================================================
//==============================================================================================================================================================
/* 
 * Program 6
 * Program to count the number of words that start with capital letters.
 */

class F {  // class x6

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








//==============================================================================================================================================================
//==============================================================================================================================================================
/* 
 * Program 7
 * Program to find that given number or string is palindrome or not.
 */

class G {  //  class x7
	
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








//==============================================================================================================================================================
//==============================================================================================================================================================
/* 
 * Program 8
 * Program to count vowels for all sentences.
 */

class H {  //  class x8
	
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








//==============================================================================================================================================================
//==============================================================================================================================================================
/*
 * Program 9
 * Program to print a string entered in a pyramid form.
 */

class I {  //  class x9
	
	public static void main(String[] args) {  //  main method
	
		Scanner in = new Scanner(System.in);  //  Object for getting input from user.
		
		System.out.println("Enter line : ");
		
		String str = in.nextLine();  //  Declare and initialize variables and object.
		int length = str.length();
		
		for(int i=0; i<length; i++){  //  Loop for printing.
		
			for (int j=0; j<length-i; j++ )  //  Loop for starting free space.
				System.out.print(" ");
				
			for (int j=0; j<=i; j++)  //  Loop to print string.
				System.out.print( str.charAt(j) + " ");
				
			System.out.println();  //  For new line.
			
		}
		
	}
	
}








//==============================================================================================================================================================
//==============================================================================================================================================================
/*
 * Program 10
 * Program to print diamond pattern.
 */

class J {  //  class x10
	
	public static void main(String[] args){  //  main method
	
		Scanner in = new Scanner(System.in);  //  For getting size from user.
		
		System.out.print("Enter number of Diamond : ");
		int no = in.nextInt();
		
		System.out.print("Enter size of Diamond   : ");
		int n = in.nextInt();
		
		for (int i=1; i<=n*no*2 ; i++){  //  Loop for printing.
			
			int x = i%(n*2)<=n? i%(n*2) : (n-(i%n)) ;  //  Logic for finding value of particular line.
			
			for ( int j=1; j<n-x+1; j++ )
				System.out.print(" " );
			
			for ( int j=1; j<=x   ; j++ )
				System.out.print("* ");
			
			System.out.println();
		}
		
	}	
	
}
