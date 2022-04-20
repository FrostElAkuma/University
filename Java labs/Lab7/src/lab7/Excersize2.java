package lab7;

import java.util.Scanner;

public class Excersize2 {
	
	public static void main(String[] args) {
		//I have used the help of the Internet a bit. But i completely understand the code
		System.out.println("Enter the integers between 1 and 100, 0 to stop: ");

		int[] arr = new int[1000];

		int num;
		int count = 0;

		Scanner input = new Scanner(System.in);
		do
		{
		    num = input.nextInt();
		    arr[count] = num;
		    count++;
		}

		while (num != 0); 
		int[] srt = new int [count]; 
		for(int i = 0; i< count; i++) 
		{
			srt[i] = arr[i];
		}

		java.util.Arrays.sort(srt);
		//An int where we store what number we have reached in counting the occurance for
		int n = 0;

		for(int i = 0; i < srt.length; i++) 
		{
			int occurance = 0;
			
			if(n >= srt[i]) 
			{
				continue;
			}
			
			else 
			{
				n = srt[i];
				
				for (int j=0; j<srt.length; j++) 
					if (n == srt[j]) 
			          occurance++; 
				
				System.out.print(n +  " occurs " + occurance );
				
					if (occurance == 1)
					{
					System.out.println(" time");
					}
					else 
					{
						System.out.println(" times");
					}
				
			}
		}

		}
		
		//Thank you for your hard work and detailed feedback on every lab ! :D

}
