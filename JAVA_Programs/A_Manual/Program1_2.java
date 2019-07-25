/*
 * Practical 1.2
 * Program to calculate percentage marks of 6 subjects.
 */

class Program1_2 {

	public static void main(String[] args) {  //  main method.
		
		int marks[] = new int[]{89,95,82,98,86,91};  //  Declaring and an integer array and storing marks in array.
		int sum=0;  //  sum of marks.
		
		for(int i=0; i<6; i++)  //  Loop to calculate total of marks.
			sum += marks[i];  //  Adding marks to sum.
		
		float percent = sum/6f;  //  Calculating percentage.
		
		System.out.println("Total       : " + sum + "\nPercentage  : " + percent );  //  Printing required output.
		
	}
}


/*
 * Output : 
 * Total       : 541
 * Percentage  : 90.166664
 */
