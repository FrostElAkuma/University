package q1_u20102097.java;

import java.util.Scanner;

public class problem1 {

	public static void main(String[] args) {
		
		int distinct = 0;
		int[] list = new int[10];
		int[] dList = new int[10];
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter ten numbers: ");
		
		for(int i = 0; i<list.length; i++) 
		{
			list[i] = input.nextInt();
		}
		
		for(int i = 0; i<list.length; i++)
		{
			//int d = list[i]; //The number that we will check if it is distinct or not
			int flag = 0;
			
			for(int j = i+1; j<list.length; j++) //i+1 cuz we want to start from next num
			{
				if(list[i] == list[j])
				{
					flag = 1;
				}
			}
			
			if(flag == 0)
			{
				dList[distinct] = list[i];
				distinct++;
			}
		}
		
		System.out.printf("number of distinct number is %d %n", distinct);
		System.out.printf("The distinct numbers are: ");
		for(int i = 0; i < distinct; i++)
		{
			System.out.printf("%d ", dList[i]);
		}
		
	}

}//Thank you as always for your hard work and detailed feedback ! :D
