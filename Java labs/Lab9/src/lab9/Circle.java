package lab9;

public class Circle {
	
	protected double x; 

	protected double y;
	
	protected double r;

	

	public Circle() {

		x = 0.0;

		y = 0.0;
		
		r = 0.0;

	}

	

	public Circle(double nX, double nY, double nR) {

		x = nX;

		y = nY;
		
		r = nR;


	}

	

	public double getX() {

		return x;

	}

	

	public double getY() {

		return y;

	}

	public double getR() {

		return r;

	}

	public void setDimension(double nX, double nY, double nR) {

		x = nX;

		y = nY;
		
		r = nR;

	}

	

	public double area() {

		return Math.PI * r * r;

	}

	

	public double circumference() {

		return 2 * Math.PI * r;

	}

	

	public String toString() {

		return String.format("([%.2f, %.2f], %.2f )", x, y, r);

	} //Thank you for your hard work and detailed feedback on every lab ! :D
}
