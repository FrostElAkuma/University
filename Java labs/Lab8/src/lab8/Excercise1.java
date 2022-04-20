package lab8;

import java.util.Scanner;

public class Excercise1 {

	public static double sumColumn(double[][] m, int columnIndex) 
	{
		
		double x = 0;
		
		for(int i = 0; i<m.length; i++)
		{
			//for(int j = 0; j<m.length; j++)
			x+= m[i][columnIndex];
		}
		
		return x;

	}
	
	public static void main(String[] args) 
	{
		double[][] list = new double[3][4];
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a 3-by-4 matrix row by row ");
		
		for(int i = 0; i<3; i++)
		{
			for(int j = 0; j<4; j++)
			{
				list[i][j] = input.nextDouble();
			}
			
		}
		
		System.out.println();
		
		for(int j = 0; j<4; j++)
		{
			System.out.printf("Sum of elements at column %d is %.1f %n", j, sumColumn(list, j));
		}
		
	}//Thank you for your hard work and detailed feedback on every lab ! :D

}
