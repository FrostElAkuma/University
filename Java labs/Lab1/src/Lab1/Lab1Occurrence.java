package Lab1;

import java.util.Scanner;

public class Lab1Occurrence {

	public static void main(String[] args) {
		
		int x, counter = 0, large = 0;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter Numbers: ");
		
		x = input.nextInt();
		
		
		
		while(x != 0)
		{
			if (large < x%10) //Getting last digit in x
			{
				large = x%10;
				counter = 0;
			}
			if (large == x%10)
			{
				counter++;
			}
			x /= 10; // Removing the last digit in x
			
		}
		
		System.out.println("The largest number is " + large);
		System.out.println("The occurrence count of the largest number is " + counter);
		
	}

}
