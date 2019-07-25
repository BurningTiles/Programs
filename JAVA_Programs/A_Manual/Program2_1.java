/*
 * Practical 2.1
 * Program to perform mathematical operation on 2 numbers.
 * (Using command line argument)
 */

class Program2_1 {

	public static void main(String[] args) {
		
		int num1 = Integer.parseInt(args[0]);  //  Using wrapper class to convert passed string argument to integer and store in variable.
		int num2 = Integer.parseInt(args[1]);
		
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

/*
 * java Program2_1 35 8  //  Make sure you enter command line arguments.
 *
 * Output : 
 * Addition        : 43
 * Subtraction     : 27
 * Multiplication  : 280
 * Division        : 4
 * Reminder        : 3
 */
