/*
 * Program to perform mathematical operation on 2 numbers.
 */

import java.util.*;

class x3 {
	
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
