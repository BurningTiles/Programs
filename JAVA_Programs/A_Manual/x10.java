/*
 * Program to print diamond pattern.
 */
 
import java.util.*;

class x10 {  //  class x10
	
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
