import java.util.*;

class Student{
	long id;
	int marks[]=new int[3];
	public float percent;
	String name;
	public void getData(){
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter student name    : ");
		name = scan.nextLine();
		System.out.print("Student Enrolment No  : ");
		id = scan.nextLong();
		System.out.print("Enter 3 subject marks : ");
		marks[0]=scan.nextInt();
		marks[1]=scan.nextInt();
		marks[2]=scan.nextInt();
		percent = (float)(marks[0]+marks[1]+marks[2])/3f;
	}
	public void display(){
		System.out.printf("%-15s%2.2f%%\n",name,percent);
	}
}

class Main{
	static void sort(Student []x){
		for(int i=0; i<10; i++){
			int max=i;
			for(int j=i; j<10; j++){
				if (x[max].percent < x[j].percent){
					Student temp;
					temp = x[max];
					x[max] = x[j];
					x[j] = temp;
				}
			}
		}
	}
	
	public static void main(String args[]){
		Scanner scan = new Scanner(System.in);
		Student s[] = new Student[10];
		for(int i=0; i<10; i++){
			System.out.println("For Student " + (i+1) + " : ");
			s[i] = new Student();
			s[i].getData();
		}
		sort(s);
		System.out.println("\n\nMerit list : ");
		System.out.printf("%-15s%s\n","Name","Percent");
		for(int i=0; i<10; i++){
			s[i].display();
		}
	}
}

/*

Output : 

For Student 1 :
Enter student name    : Manish
Student Enrolment No  : 10001
Enter 3 subject marks : 75 82 88
For Student 2 :
Enter student name    : Kandarp
Student Enrolment No  : 10002
Enter 3 subject marks : 85 96 89
For Student 3 :
Enter student name    : Dhruv
Student Enrolment No  : 10003
Enter 3 subject marks : 75 71 79
For Student 4 :
Enter student name    : Abhi
Student Enrolment No  : 10004
Enter 3 subject marks : 84 79 92
For Student 5 :
Enter student name    : Kinjal
Student Enrolment No  : 10005
Enter 3 subject marks : 65 85 79
For Student 6 :
Enter student name    : Kavita
Student Enrolment No  : 10006
Enter 3 subject marks : 95 98 84
For Student 7 :
Enter student name    : Aditya
Student Enrolment No  : 10007
Enter 3 subject marks : 75 64 80
For Student 8 :
Enter student name    : Krishna
Student Enrolment No  : 10008
Enter 3 subject marks : 94 91 97
For Student 9 :
Enter student name    : Hitarth
Student Enrolment No  : 10009
Enter 3 subject marks : 79 87 81
For Student 10 :
Enter student name    : Prakash
Student Enrolment No  : 10010
Enter 3 subject marks : 75 81 88


Merit list :

Name           Percent
Krishna        94.00%
Kavita         92.33%
Kandarp        90.00%
Abhi           85.00%
Hitarth        82.33%
Manish         81.67%
Prakash        81.33%
Kinjal         76.33%
Dhruv          75.00%
Aditya         73.00%
	
 */