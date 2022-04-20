package lab5;

public class Fan {
	
	static final int SLOW = 1;
	static final int MEDIUM = 2;
	static final int FAST = 3;
	
	private int speed; // attribute, data field
	private boolean on;
	private double radius;
	private String color;
	
	//Default constructor
	public Fan() 
	{
		speed = SLOW;
		on = false;
		radius = 5.0;
		color = "blue";
	}
	
	//Constructor with parameter
	//public Fan(double newRadius)
	//{
	//	radius = newRadius;
	//}
	
	public int getSpeed()
	{
		return speed;
	}
	
	public boolean getOn()
	{
		return on;
	}
	
	public double getRadius()
	{
		return radius;
	}
	
	public String getColor()
	{
		return color;
	}
	
	public void set(int newSpeed, boolean newOn, double newRadius, String newColor)
	{
		speed = newSpeed;
		on = newOn;
		radius = newRadius;
		color = newColor;
	}
	
	public String toString()
	{
		if(on)
		{
			return "speed: "+speed+", color: "+color+", radius: "+radius+ "\nfan is on";
		}
		else
		{
			return "color: "+color+", radius: "+radius+ "\nfan is off";
		}
		
	}
}
