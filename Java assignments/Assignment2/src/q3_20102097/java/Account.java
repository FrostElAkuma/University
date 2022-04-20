package q3_20102097.java;

import q2_u20102097.java.MyRectangle;

public class Account {
	
	private int id = 0; 
	private double balance = 0.0;
	private java.util.Date dateCreated;
	
	//Default constructor
	public Account() 
	{
		dateCreated = new java.util.Date();
	}
	
	//Constructor with 2 parameter
	public Account(int newId, double newB)
	{
		id = newId;
		balance = newB;
	}
	
	public double getId()
	{
		return id;
	}
	
	public double getB()
	{
		return balance;
	}
	
	public String getDate()
	{
		return dateCreated.toString();
	}
	/* The hw2 pdf did not say we need a set method ?
	public void set(int newId, double newB)
	{
		id = newId;
		balance = newB;
	}*/
	
	public void withdraw(double x) {
        balance -= x;
    }

    public void deposit(double x) {
        balance += x;
    }
	
}
