package lab2;

import java.util.Scanner;

public class CountNumber {

	public static void main(String[] args) {
		
		int x, length;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter Numbers: ");
		
		x = input.nextInt();
		
		length = (int) (Math.log10(x) + 1);
		
		System.out.print("There are "+length+" digits, which are ");
		for (int i = length; i > 0; i--)
		{
			int temp = x;
			temp /= Math.pow(10, i-1); //To get the numbers from first to last
			temp = temp%10; //Getting the last digit 
			System.out.print(temp+" ");
	
		}

	}

}
