package q3_u20102097;

public class Faculty extends Employee {
	
	String officeHours; 
	int rank;
	public static final int Lecturer = 1;
	public static final int Assistant_Proffesor = 2;
	public static final int Associate_Proffesor = 3;
	public static final int Proffesor = 4;
	
	public Faculty() 
	{
		super();
		officeHours = "";
		rank = Lecturer;
	}
	
	public Faculty(String n) 
	{
		super.setName(n);
	}
	
	public Faculty(String n, String a, int nu, String e, double s, String o, String office, int r) 
	{
		
		super(n,a,nu,e,s,o);
		officeHours = office;
		rank = r;
	}
	
	public String getOfficeHours() 
	{
		return officeHours;
	}
	
	public void setOfficeHours(String office) 
	{
		officeHours = office;
	}
	
	public int getRank() 
	{
		return rank;
	}
	
	public void setRank(int r) 
	{
		rank = r;
	}
	
	public String toString() 
	{
		return String.format("Faculty: %s", super.getName());
	}
}
