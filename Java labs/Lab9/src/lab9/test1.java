package lab9;

import java.util.Scanner;

public class test1 {

	public static void main(String[] args) {
		
		double x,y,r,h;
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the x value of the center: ");
		x=input.nextDouble();
		System.out.println("Enter the y value of the center: ");
		y=input.nextDouble();
		System.out.println("Enter the radius: ");
		r=input.nextDouble();
		System.out.println("Enter the height: ");
		h=input.nextDouble();
		
		Cylinder c1 = new Cylinder(x, y, r, h);

		System.out.printf("%nmyCylinder: <%s>%n", c1);

		System.out.printf("Surface area of myCylinder : %.2f%n", c1.surfaceArea());

		System.out.printf("Volume of myCylinder : %.2f", c1.volume());
	}//Thank you for your hard work and detailed feedback on every lab ! :D

}
