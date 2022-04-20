package assignment1;

import java.util.Scanner;

public class q1_u20102097 {

	public static void main(String[] args) {

		int d10 = 0, last, temp;
		String x;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter the first 9 digits of an ISBN: ");
		
		x = input.next();
		
		//System.out.println(x);
		
		temp = Integer.parseInt(x);
		
		int length = x.length();
		
		if(length != 9)
		{
			System.out.print("You need to enter exactly 9 digits");
		}
		else
		{
			for(int i = 9; i > 0; i--)
			{
				//Getting last digit in x
				last = temp%10; 
				//removing last digit
				temp /= 10; 
				
				//System.out.println(i);
				//System.out.println(last);
				
				d10 += last * i;
			}
			
			d10 = d10%11;
			
			if(d10 == 10)
			{
				System.out.printf("The ISBN-10 number is %sX",x);
			}
			else
			{
				System.out.printf("The ISBN-10 number is %s%d",x , d10);
			}
		
		}
	}

}
