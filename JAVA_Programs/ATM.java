/*
 * This program is to illustrate the working of ATM to manage money.
 * It will automatically calculate the required currency and give output.
 */

import java.util.*;

class ATM {
	long atmNotes[][] = new long[4][2];
	long atmBalance;
	static Scanner in = new Scanner(System.in);
	
	ATM(){
		atmNotes[0][0] = 2000;
		atmNotes[1][0] = 500;
		atmNotes[2][0] = 200;
		atmNotes[3][0] = 100;
		
		atmNotes[0][1] = atmNotes[1][1] = 100;
		atmNotes[2][1] = atmNotes[3][1] = 200;
		
		atmBalance = 0;
		for(int i=0; i<4; i++)
			atmBalance += atmNotes[i][0]*atmNotes[i][1];
	}
	
	void withdraw(long amount){
		if (amount < 0)
			System.out.println("You can not use negative values.\n");
		else if (amount > atmBalance)
			System.out.println("Insufficient Balance in ATM.\n");
		else if ((amount%100) != 0)
			System.out.println("Invalid Amount.\nAmount should be divisible by 100.\n");
		else {
			long x=amount;
			long count[]={0,0,0,0};
			for(int i=0; i<4 ; i++){
				if (atmNotes[i][0] <= x){
					count[i] = x/atmNotes[i][0];
					if (atmNotes[i][1] >= count[i])
						x -= count[i]*atmNotes[i][0];
					else{
						count[i] = atmNotes[i][1];
						x -= count[i]*atmNotes[i][0];
					}
				}
			}
			if (x==0){
				System.out.println("Calculation : ");
				for(int i=0; i<4; i++){
					System.out.printf("%-6d x %-8d = %d\n",atmNotes[i][0],count[i],atmNotes[i][0]*count[i]);
					atmNotes[i][1] -= count[i];
				}
				atmBalance -= amount;
				System.out.println("\nTotal = " + amount + "\n");
			}
			else
				System.out.println("Given amount can't be processed.\nTry to change amount.\n\n");
		}
	}
	
	void add(){
		long count[]={0,0,0,0},temp;
		for(int i=0; i<4; i++){
			System.out.printf("Enter no of %-4d notes : ",atmNotes[i][0]);
			count[i] = in.nextLong();
			if (count[i] < 0){
				System.out.println("Unknow value and can not be added.\n");
				return;
			}
		}
		for(int i=0; i<4 ; i++){
			atmBalance += atmNotes[i][0]*count[i];
			atmNotes[i][1] += count[i];
		}
		System.out.println("Added successfully.\n");
	}
	
	void getAtmBalance(){
		System.out.println("ATM BALANCE : ");
			for(int i=0; i<4; i++){
				System.out.printf("%-6d x %-8d = %d\n",atmNotes[i][0],atmNotes[i][1],atmNotes[i][0]*atmNotes[i][1]);
			}
			System.out.println("\nTotal = " + atmBalance + "\n");
	}
	
	public static void main(String[] args){
		ATM a = new ATM();
		
		while (true){
			System.out.print("\n\n1.Withdraw    2.Add         3.ATM balance 4.Exit\n");
			System.out.print("Enter choice : ");
			long temp = in.nextLong();
			
			System.out.println();
			
			if(temp == 1){
				System.out.print("Enter Amount : ");
				temp = in.nextLong();
				a.withdraw(temp);
			}
			else if (temp == 2){
				a.add();
			}
			else if (temp == 3)
				a.getAtmBalance();
			else if (temp == 4)
				break;
			else
				System.out.println("Unknown choice.");
		}
	}
}
