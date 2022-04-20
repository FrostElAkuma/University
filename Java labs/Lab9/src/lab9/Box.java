package lab9;

import lab9.Rectangle;

public class Box extends Rectangle {

	

	private double height;

	

	public Box() {

		super(); //invoke the default constructor of the Rectangle class		

		height = 0.0;

		

	}

	

	public Box(double l, double w, double h) {

		super(l, w);//invoke the constructor of Rectangle with arguments

		height = h;

	}

	

	public double getHeight() {

		return height;

	}

	

	public void setDimension(double l, double w, double h) {

		super.setDimension(l, w); //invoke the setDimension() of the Rectangle class

		height = h;

	}

	

	public double area()

	{

	  return 2 * (super.area()+

	         + length * height 

	         + width * height);

	}



	public double volume()

	{

	  return super.area()*height;

	}

	

	public String toString() {

		return super.toString()+ String.format(", height: %.2f", height);

	}



}
