package q3_u20102097;

public class Person {
	
	private String name;
	private String address;
	private int phoneNumber;
	private String email;
	
	public Person() 
	{
		name = "";
		address = "";
		phoneNumber = 0;
		email = "";
	}
	
	public Person(String n) 
	{
		name = n;
	}
	
	public Person(String n, String a, int nu, String e) 
	{
		name = n;
		address = a;
		phoneNumber = nu;
		email = e;
	}
	
	public void setName(String n) 
	{
		name = n;
	}
	
	public void setAddress(String a) 
	{
		address = a;
	}
	
	public void setPhoneNumber(int nu) 
	{
		phoneNumber = nu;
	}
	
	public void setEmail(String e) 
	{
		email = e;
	}
	
	public void set(String n, String a, int nu, String e) 
	{
		name = n;
		address = a;
		phoneNumber = nu;
		email = e;
	}
	
	public String getName() 
	{
		return name;
	}
	
	public String getAddress() 
	{
		return address;
	}
	
	public int getPhoneNumber() 
	{
		return phoneNumber;
	}
	
	public String getEmail() 
	{
		return email;
	}
	
	public String toString() 
	{
		return String.format("Person: %s", name);
	}
}//Thank you as always for your hard work and detailed feedback ! :D
