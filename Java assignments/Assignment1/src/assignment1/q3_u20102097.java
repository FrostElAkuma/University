package assignment1;

import java.util.Scanner;

public class q3_u20102097 {

	public static void main(String[] args) {

		double rad, x, y, angle;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter the radius: ");
		
		rad = input.nextDouble();
		
		System.out.printf("Three random points are");
		for(int i = 0; i < 3; i++)
		{
			
			angle = 0 + (Math.random() * ((2*Math.PI) - 0 + 1));
			
			x = rad * Math.cos(angle);
			y = rad * Math.sin(angle);
			
			System.out.printf("%n (%.2f, %.2f)" , x, y);
		}
		

	}

}
