package q2_u20102097.java;

import java.util.Scanner;

import q2_u20102097.java.MyRectangle;

public class TestMyRectangle {

	public static void main(String[] args) {

		 Scanner in = new Scanner(System.in);
		 
		 System.out.print("Enter the x, y coordinates, width, and height of the rectangle: ");
		 double x = in.nextDouble();
		 double y = in.nextDouble();
		 double w = in.nextDouble();
		 double h = in.nextDouble();
		 MyRectangle r1 = new MyRectangle(x, y, w, h);
		 System.out.println(r1);
		 
		 System.out.print("Enter the x, y coordinates of a point: ");
		 x = in.nextDouble();
		 y = in.nextDouble();
		 
		 if(r1.contains(x, y))
			 System.out.println("The point is inside the rectangle");
		 else 
			 System.out.println("The point is outside the rectangle");
		 
		 System.out.print("Enter the x, y coordinates, width, and height of the second rectangle: ");
		 x = in.nextDouble();
		 y = in.nextDouble();
		 w = in.nextDouble();
		 h = in.nextDouble();
		 
		 MyRectangle r2 = new MyRectangle(x, y, w, h);
		 if (r1.contains(r2))
			 System.out.println("The second rectangle is inside the first one.");
		 else
			 System.out.println("The second rectangle is not inside the first one.");

	}

}
