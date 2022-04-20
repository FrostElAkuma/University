package q1_u20102097.java;

import java.util.Scanner;

import q1_u20102097.java.MyTime;

public class TestMyTime {

	public static void main(String[] args) {
		
		MyTime t1 = new MyTime(); 
		
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the time starting with hour, minute and second: ");
		int hour = input.nextInt();
		int min = input.nextInt();
		int sec = input.nextInt();
		
		t1.set(hour, min, sec);
		
		System.out.println(t1);//automatically invokes toString() method
		
		System.out.println(t1.toStandardTime());
		//t1.toStandardTime();
		
		t1.incrementSecond();
		System.out.print("The new time after one second is: ");
		System.out.println(t1);
	}

}
