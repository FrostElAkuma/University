package assignment1;

import java.util.Scanner;

public class q2_u20102097 {
	
	public static void main(String[] args) {

		double priceA, priceC, percent, gross, donated, net;
		int soldA, soldC, totalSold;
		String mName;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter movie name: ");
		mName = input.nextLine();
		
		System.out.print("Enter the price of an adult ticket: ");
		priceA = input.nextDouble();
		
		System.out.print("Enter the price of a child ticket: ");
		priceC = input.nextDouble();
		
		System.out.print("Enter number of adult tickets sold: ");
		soldA = input.nextInt();
		
		System.out.print("Enter number of child tickets sold: ");
		soldC = input.nextInt();
		
		System.out.print("Enter the percentage of donation: ");
		percent = input.nextDouble();
		
		totalSold = soldA + soldC;
		gross = (soldA * priceA) + (soldC * priceC);
		donated = gross * (percent/100);
		net = gross - donated;
		//%-30s %3d %7s
		System.out.printf("%-20s %20s %n", "Movie Name: ", mName);
		System.out.printf("%-20s %20d %n", "Number of Tickets Sold: ", totalSold);
		System.out.printf("%-20s %20.2f %n", "Gross Amount: ",gross);
		System.out.printf("%-20s %20.2f %n", "Percentage of Gross Amount Donated: ", percent);
		System.out.printf("%-20s %20.2f %n", "Amount Donated: ", donated);
		System.out.printf("%-20s %20.2f", "Net Sale: ", net);
		
	}
}
