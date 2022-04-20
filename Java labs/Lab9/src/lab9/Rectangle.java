package lab9;

public class Rectangle {

	

	protected double length; 

	protected double width;

	

	public Rectangle() {

		length = 0.0;

		width = 0.0;

	}

	

	public Rectangle(double l, double w) {

		length = l;

		width = w;

	}

	

	public double getLength() {

		return length;

	}

	

	public double getWidth() {

		return width;

	}

	

	public void setDimension(double l, double w) {

		length = l;

		width = w;

	}

	

	public double area() {

		return length * width;

	}

	

	public double perimeter() {

		return 2*(length + width);

	}

	

	public String toString() {

		return String.format("length: %.2f, width: %.2f", length, width);

	}
}
