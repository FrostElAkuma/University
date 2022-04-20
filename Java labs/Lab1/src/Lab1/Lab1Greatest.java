package Lab1;

import java.util.Scanner;

public class Lab1Greatest {
	
	public static void main(String[] args) {
		
		int x, y, c, temp1, temp2, GCD;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter the first number: ");
		x = input.nextInt();
		
		System.out.print("Enter the second number: ");
		y = input.nextInt();
		
		temp1 =x;
		temp2 =y;
		
		while(x!=0 && y!=0) 
		  {
		     c = y;
		     y = x%y;
		   //  System.out.println("This is y " + y);  Used this for testing
		     x = c;
		  }
		
		if (x == 0)
		{
			GCD = y;
		}
		else
		{
			GCD = x;
		}
		
		x = temp1;
		y = temp2;
		
		System.out.println("GCD of " + x + " and " + y + " is " + GCD);
		
	}
}
