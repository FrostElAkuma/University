package q3_u20102097;

public class Employee extends Person {
	
	double salary; 
	String office; 
	
	public Employee() {
		super();
		salary = 0;
		office = "";
	}
	
	public Employee(String n) {
		super.setName(n);
	}
	
	public Employee(String n, String a, int nu, String e, double s, String o) {
		super(n,a,nu,e);
		salary = s; 
		office = o; 
	}
	
	public double getSalary() 
	{
		return salary;
	}
	
	public String getOffice() 
	{
		return office;
	}
	
	public void setSalary(double s) 
	{
		salary = s;
	}
	
	public void setOffice(String o) 
	{
		office = o;
	}
	
	public String toString() 
	{
		return String.format("Employee: %s", super.getName());
	}
}

