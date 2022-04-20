package q3_u20102097;

public class Student extends Person {
	
	private int status;
	public static final int Freshman = 1;
	public static final int Sophmore = 2;
	public static final int Junior = 3;
	public static final int Senior = 4;
	
	public Student() 
	{
		super();
		status = Freshman; 
	}
	
	public Student(String n) 
	{
		super.setName(n);
	}
	
	public Student(String n, String a, int nu, String e, int s) 
	{
		super(n,a,nu,e);
		status = s; 
	}
	
	public void setStatus(int s) 
	{
		status = s;
	}
	
	public int getStatus() 
	{
		return status;
	}
	
	public String toString() 
	{
		return String.format("Student: %s", super.getName());
	}
}
