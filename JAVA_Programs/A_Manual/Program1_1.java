/*
 * Practical 1.1
 * Write a program to convert rupees to dollar. (60 rupees = 1 dollar)
 */

class Program1_1 {
	public static void main(String[] args) {  // main method(function). Format should be maintained else not work. 
		
		int rs = 360;  //  We are assigning value 360 to rs which will be converted to dollar.
		float dollar = rs/60f;  //  Calculating to convert rs to dollar.
		System.out.println(rs + " Rs = " + dollar + " Dollar.");  //  Printing
		
	}
}

/*
 * Output : 
 * 360 Rs = 6.0 Dollar.
 */
