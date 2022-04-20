package lab6;

public class RegularPolygon {
	
	private int n; // number of sides
	private double side; //length of side
	private double x;
	private double y;
	private static int nbOfPolygons = 0;
	
	//Default constructor
	public RegularPolygon() 
	{
		this(3, 1.0);
	}
	
	//Constructor with 2 parameter
	public RegularPolygon(int newN, double newSide)
	{
		n = newN;
		side = newSide;
		x = 0;
		y = 0;
		nbOfPolygons++;
	}
	
	//Constructor with 4 parameter
	public RegularPolygon(int newN, double newSide, double newX, double newY)
	{
		n = newN;
		side = newSide;
		x = newX;
		y = newY;
		nbOfPolygons++;
	}
	
	public int getN()
	{
		return n;
	}
	
	public double getSide()
	{
		return side;
	}
	
	public double getX()
	{
		return x;
	}
	
	public double getY()
	{
		return y;
	}
	
	public static int getNbOfPolygons()
	{
		return nbOfPolygons;
	}
	
	public void set(int newN, double newSide, double newX, double newY)
	{
		n = newN;
		side = newSide;
		x = newX;
		y = newY;
	}
	
	public double getPerimeter()
	{
		return n * side;
	}
	
	public double getArea()
	{
		return (n * Math.pow(side, 2)) / (4 * Math.tan(Math.PI / n));
	}
	
	public String toString()
	{
		
		//return "speed: "+speed+", color: "+color+", radius: "+radius+ "\nfan is on";
		
		return String.format("Polygon %d: Perimeter = %.2f, Area = %.2f", getNbOfPolygons(), getPerimeter(), getArea());
		//Thank you for your hard work and detailed feedback on every lab ! :D 
	}
}
