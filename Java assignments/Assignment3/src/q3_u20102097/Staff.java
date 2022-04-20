package q3_u20102097;

public class Staff extends Employee {
	
	String title;
	
	public Staff() 
	{
		super();
		title = "";
	}
	
	public Staff(String n) 
	{
		super.setName(n);
	}
	
	public Staff(String n, String a, int nu, String e, double s, String o, String t) 
	{ 
		super(n,a,nu,e,s,o);
		title = t;
	}
	
	public void setTitle(String t) 
	{
		title = t;
	}
	
	public String getTitle() 
	{
		return title;
	}
	
	public String toString() 
	{
		return String.format("Staff: %s", super.getName());
	}
}
