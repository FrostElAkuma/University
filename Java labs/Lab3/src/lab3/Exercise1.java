package lab3;

import java.util.Scanner;

public class Exercise1 {

	public static void main(String[] args) {
		
		double r, s, area;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter the length from the center to a vertex: ");
		
		r = input.nextDouble();
		
		//s = 2 * r * (Math.sin(Math.PI / 5));
		
		area = 5 * Math.pow(r,2) * Math.sqrt((5 + Math.sqrt(5)) / 2) / 4;
		
		System.out.printf("%nThe are of the pentagon is %.2f" , area);
		
		

	}

}
