package lab7;

import java.util.Scanner;

public class Exercise1 {

	public static void main(String[] args) {

		//final int ARRAY_SIZE;
		
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of students: ");
		int arraySize = input.nextInt();
		
		int[] list = new int[arraySize];
		
		//filling the array
		System.out.print("Enter " +arraySize+ " scores: ");
		for(int i=0; i<list.length; i++)
		{
			list[i] = input.nextInt();
		}
		
		int best =0;
		//finding best score
		for(int i=0; i<list.length; i++)
		{
			if(list[i] > best)
			{
				best = list[i];
			}
		}
		
		for(int i=0; i<list.length; i++)
		{
			char grade;
			if(list[i] >= best -10)
				grade = 'A';
			else if(list[i] >= best -20)
				grade = 'B';
			else if(list[i] >= best -30)
				grade = 'C';
			else if(list[i] >= best -40)
				grade = 'D';
			else 
				grade = 'F';
			System.out.println("Student "+i+ " score is " +list[i]+ " and grade is " + grade);
		}
		//Thank you for your hard work and detailed feedback on every lab ! :D
	}

}
