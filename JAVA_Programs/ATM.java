/*
 * This program is to illustrate the working of ATM to manage money.
 * It will automatically calculate the required currency and give output.
 */

import java.util.*;

class ATM {

	public static void main(String a[]){
		
		// Notes in bank
		long twoThousand = 20, fiveHundred = 30, twoHundred = 50, hundred = 100, fifty = 150, twenty = 200, ten = 200; // represent notes. You can also make it as an array, but for understanding giving name is better.	
		
		long atmCredit = (twoThousand*2000)+(fiveHundred*500)+(twoHundred*200)+(hundred*100)+(fifty*50)+(twenty*20)+(ten*10);
		
		Scanner in = new Scanner(System.in);

		
		while (true){
			System.out.print("\n\n1.Get    2.Input  3.Exit\n");
			System.out.print("Enter choice : ");
			long temp = in.nextInt();
			
			System.out.print("\033[H\033[2J");  
			System.out.flush(); 
			
			if(temp == 1){
				System.out.print("Enter Amount : ");
				long userAmount = in.nextInt();
				temp = userAmount;
				if( temp>atmCredit ){
					System.out.println("Insufficient Balance in ATM.");
					continue;
				}
				else if ( temp%10!=0 ){
					System.out.println("Invalid Amount.\nAmount should be divisible by 10.");
					continue;
				}
				else{
					long outNotes[] = new long[7];
					
					if ( temp/2000 <= twoThousand )
						outNotes[0] = temp/2000;
					else 
						outNotes[0] = twoThousand;
					temp -= outNotes[0]*2000;		
						
					if ( temp/500 <= fiveHundred )
						outNotes[1] = temp/500;
					else 
						outNotes[1] = fiveHundred;
					temp -= outNotes[1]*500;
					
					if ( temp/200 <= twoHundred )
						outNotes[2] = temp/200;
					else 
						outNotes[2] = twoHundred;
					temp -= outNotes[2]*200;
					
					if ( temp/100 <= hundred )
						outNotes[3] = temp/100;
					else 
						outNotes[3] = hundred;
					temp -= outNotes[3]*100;
					
					if ( temp/50 <= fifty )
						outNotes[4] = temp/50;
					else 
						outNotes[4] = fifty;
					temp -= outNotes[4]*50;
					
					if ( temp/20 <= twenty )
						outNotes[5] = temp/20;
					else 
						outNotes[5] = twenty;
					temp -= outNotes[5]*20;
					
					if ( temp/10 <= ten )
						outNotes[6] = temp/10;
					else 
						outNotes[6] = ten;
					temp -= outNotes[6]*10;
					
					if ( temp==0 ){
						System.out.printf("Value   Qty   Total\n");
						
						System.out.printf("%5d x %3d = %d\n",2000,outNotes[0],outNotes[0]*2000);
						twoThousand -= outNotes[0];
						
						System.out.printf("%5d x %3d = %d\n",500 ,outNotes[1],outNotes[1]*500 );
						fiveHundred -= outNotes[1];
						
						System.out.printf("%5d x %3d = %d\n",200 ,outNotes[2],outNotes[2]*200 );
						twoHundred  -= outNotes[2];
						
						System.out.printf("%5d x %3d = %d\n",100 ,outNotes[3],outNotes[3]*100 );
						hundred     -= outNotes[3];
						
						System.out.printf("%5d x %3d = %d\n",50  ,outNotes[4],outNotes[4]*50  );
						fifty       -= outNotes[4];
						
						System.out.printf("%5d x %3d = %d\n",20  ,outNotes[5],outNotes[5]*20  );
						twenty      -= outNotes[5];
						
						System.out.printf("%5d x %3d = %d\n",10  ,outNotes[6],outNotes[6]*10  );
						ten         -= outNotes[6];
						System.out.printf("\nTotal = %d\n",userAmount);
					}
					else
						System.out.println("Given amount can't be processed.\nTry to change amount.");
				}
			}
			else if (temp == 2){
				System.out.print("Enter Qty of 2000 : ");
				temp = in.nextInt();
				twoThousand += temp;
				
				System.out.print("Enter Qty of 500  : ");
				temp = in.nextInt();
				fiveHundred += temp;
				
				System.out.print("Enter Qty of 200  : ");
				temp = in.nextInt();
				twoHundred  += temp;
				
				System.out.print("Enter Qty of 100  : ");
				temp = in.nextInt();
				hundred     += temp;
				
				System.out.print("Enter Qty of 50   : ");
				temp = in.nextInt();
				fifty       += temp;
				
				System.out.print("Enter Qty of 20   : ");
				temp = in.nextInt();
				twenty      += temp;
				
				System.out.print("Enter Qty of 10   : ");
				temp = in.nextInt();
				ten         += temp;
			}
			else if (temp == 3)
				break;
			else
				System.out.println("Unknown choice.");
			atmCredit = (twoThousand*2000)+(fiveHundred*500)+(twoHundred*200)+(hundred*100)+(fifty*50)+(twenty*20)+(ten*10);
		}
	}
}
