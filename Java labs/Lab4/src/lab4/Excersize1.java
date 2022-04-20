package lab4;

import java.util.Scanner;

public class Excersize1 {

	public static void main(String[] args) {

		//int x1, x2, x3;
		String ssn, sub1, sub2;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter a SSN: ");
		
		ssn = input.next();
		sub1 = ssn.substring(3,4);
		sub2 = ssn.substring(6,7);
		
		if(ssn.length() != 11 || sub1.compareTo("-")!= 0 || sub2.compareTo("-")!= 0)
		{
			//System.out.println(ssn.length());
			System.out.print(ssn + " 1 is an invalid social security number");
		}
		
		else
		{
			System.out.print(ssn + " is a valid social security number");
		}
	}

}
