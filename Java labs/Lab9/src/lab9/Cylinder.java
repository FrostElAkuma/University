package lab9;

import lab9.Circle;

public class Cylinder extends Circle {
	
	
	private double height;

	

	public Cylinder() {

		super(); //invoke the default constructor of the Circle class		

		height = 0.0;

		

	}

	

	public Cylinder(double nX, double nY, double nR, double nH) {

		super(nX, nY, nR);//invoke the constructor of Circle with arguments

		height = nH;

	}

	

	public double getHeight() {

		return height;

	}

	

	public void setDimension(double nX, double nY, double nR, double nH) {

		super.setDimension(nX, nY, nR); //invoke the setDimension() of the Circle class

		height = nH;

	}

	

	public double surfaceArea()

	{

	  return ((2 * super.area()) + (height * super.circumference()));

	}



	public double volume()

	{

	  return super.area()*height;

	}

	

	public String toString() {

		return super.toString()+ String.format(", %.2f ", height);

	}//Thank you for your hard work and detailed feedback on every lab ! :D


}
