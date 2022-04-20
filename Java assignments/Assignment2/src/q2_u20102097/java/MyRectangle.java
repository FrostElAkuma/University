package q2_u20102097.java;

public class MyRectangle {
	
	private int n; // number of sides
	private double x, y, width, height;
	private static int nbOfPolygons = 0;
	
	//Default constructor
	public MyRectangle() 
	{
		width = 1;
		height = 1;
		x = 0;
		y = 0;
	}
	
	//Constructor with 4 parameter
	public MyRectangle(double newX, double newY, double newW, double newH)
	{
		width = newW;
		height = newH;
		x = newX;
		y = newY;
	}
	
	public double getW()
	{
		return width;
	}
	
	public double getH()
	{
		return height;
	}
	
	public double getX()
	{
		return x;
	}
	
	public double getY()
	{
		return y;
	}
	
	public void set(double newW, double newH, double newX, double newY)
	{
		width = newW;
		height = newH;
		x = newX;
		y = newY;
	}
	
	public boolean contains(double inX, double inY)
	{
		return (height > inY && width > inX);
	}
	
	public boolean contains(MyRectangle r)
	{
		return (height > r.height && width > r.width);
	}
	
	public String toString()
	{
		
		return String.format("center(%.2f, %.2f), width: %.2f, height: %.2f", getX(), getY(), getW(), getH());
	}
}

