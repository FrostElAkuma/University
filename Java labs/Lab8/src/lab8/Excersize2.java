package lab8;

import java.util.Scanner;

public class Excersize2 {

	public static int[] locateLargest(double[][] a) 
	{
		
		double max = 0;
		int[] list= new int[2];
		
		for(int i = 0; i<a.length; i++)
		{
			for(int j = 0; j<a[0].length; j++)
			{
				if(a[i][j] > max)
				{
					max = a[i][j];
					list[0] = i;
					list[1] = j;
				}
			}
		}
		
		return list;

	}
	
	public static void main(String[] args) 
	{
	
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of rows and columns of the array: ");
		int arrayR = input.nextInt();
		int arrayC = input.nextInt();
		
		double[][] list = new double[arrayR][arrayC];
		
		System.out.println("Enter the array: ");
		for(int i = 0; i<arrayR; i++)
		{
			for(int j = 0; j<arrayC; j++)
			{
				list[i][j] = input.nextDouble();
			}
			
		}
		
		System.out.println();
		
		int[] maxLoc = locateLargest(list);
		
		System.out.printf("The location of the largest element is at (%d, %d)", maxLoc[0], maxLoc[1]);
		
	}//Thank you for your hard work and detailed feedback on every lab ! :D

}
