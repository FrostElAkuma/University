package lab4;

import java.util.Scanner;

public class Excersize2 {

	public static void main(String[] args) {

		String c1, c2, c3, n1, n2, n3;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter the first city: ");
		c1 = input.nextLine();
		
		System.out.print("Enter the second city: ");
		c2 = input.nextLine();
		
		System.out.print("Enter the third city: ");
		c3 = input.nextLine();
		
		n1=c1.substring(0,1);
		n2=c2.substring(0,1);
		n3=c3.substring(0,1);
		
		System.out.println("The three cities in alphabetical order are: ");
		
		int compare1 = n1.compareTo(n2);
		int compare2 = n1.compareTo(n3);
		int compare3 = n2.compareTo(n3);
		//int compare4 = n2.compareTo(n3);
		
		if(compare1 < 0 && compare2 < 0)
		{
			System.out.println(c1);
			if(compare3 < 0)
			{
				System.out.println(c2);
				System.out.println(c3);
			}
			else 
			{
				System.out.println(c3);
				System.out.println(c2);
			}
			
		}
		
		if(compare1 > 0 && compare3 < 0)
		{
			System.out.println(n2);
			if(compare2 < 0)
			{
				System.out.println(c1);
				System.out.println(c3);
			}
			else 
			{
				System.out.println(c3);
				System.out.println(c1);
			}	
		}
		
		if(compare2 > 0 && compare3 > 0)
		{
			System.out.println(c3);
			if(compare1 < 0)
			{
				System.out.println(c1);
				System.out.println(c2);
			}
			else 
			{
				System.out.println(c2);
				System.out.println(c1);
			}	
		}
		
	}

}
