package q1_u20102097.java;

public class MyTime {
	
	private int hour, minute, second;
	
	//Default constructor
	public MyTime() 
	{
		hour = 0;
		minute = 0;
		second = 0;
	}
	
	//Constructor with 33 parameter
	public MyTime(int newHour, int newMin, int newSec)
	{
		hour = newHour;
		minute = newMin;
		second = newSec;
	}
	
	public int getHour()
	{
		return hour;
	}
	
	public int getMin()
	{
		return minute;
	}
	
	public int getSec()
	{
		return second;
	}
	
	public void set(int newHour, int newMin, int newSec)
	{
		//Checking if the input is valid
		if(newHour > 23 || newMin > 59 || newSec > 59)
		{
			//Should print an error. But this function is void 
		}
		else
		{
			hour = newHour;
			minute = newMin;
			second = newSec;
		}
		
	}
	
	public void incrementSecond()
	{
		if(second ==59)
		{
			second =0;
			incrementMinute();
		}

		else
			second++;
	}
	
	public void incrementMinute()
	{
		if(minute ==59)
		{
			minute =0;
			incrementHour();
		}
		else
			minute++;
	}
	
	public void incrementHour()
	{
		if(hour == 23)
			hour = 0;
		else
			hour++;
	}
	
	public String toString()
	{
		
		return String.format("The time in universal format is: %02d:%02d:%02d", getHour(), getMin(), getSec());
	}
	
	public String toStandardTime()
	{
		if(hour >= 12)
		{
			if(hour == 12)
				return String.format("The time in standard format is: %02d:%02d:%02d PM", getHour(), getMin(), getSec());
			else
				return String.format("The time in standard format is: %02d:%02d:%02d PM", getHour()-12, getMin(), getSec());
		}
		else
			return String.format("The time in standard format is: %02d:%02d:%02d AM", getHour(), getMin(), getSec());
	}
}

