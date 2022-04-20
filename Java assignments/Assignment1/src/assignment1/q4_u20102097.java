package assignment1;

import java.util.Scanner;

public class q4_u20102097 {

	public static void main(String[] args) {
		
		String word, flag;
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter Y/y to convert a telephone number from letters to digits.");
		System.out.println("Enter any other letter to terminate the program.");
		
		while (true) 
		{
			
	        flag = input.next();
	        if (!flag.equalsIgnoreCase("Y")) 
	        {
	            break;      
	        }
	        
	        System.out.println("Enter a telephone number using letters:");
			word = input.next();
	        
	        for(int i = 0; i <7; i++)
	        {
	        	
	        	char letter = word.charAt(i);
	        	letter = Character.toLowerCase(letter);
	        	
	        	if(i == 3)
	        	{
	        		System.out.print("-");
	        	}
	    
	        	switch(letter)
	        	{
	        	       
	        	         case 'a':
	        	         case 'b':
	        	         case 'c':
	        	             System.out.print("2");
	        	             break;

	        	         case 'd':
	        	         case 'e':
	        	         case 'f':
	        	            System.out.print("3");
	        	             break;

	        	         case 'g':
	        	         case 'h':
	        	         case 'i':
	        	             System.out.print("4");
	        	             break;
	        	             
	        	         case 'j':
	        	         case 'k':
	        	         case 'l':
	        	             System.out.print("5");
	        	             break;

	        	         case 'm':
	        	         case 'n':
	        	         case 'o':
	        	             System.out.print("6");
	        	             break;
	        	             
	        	         case 'p':
	        	         case 'q':
	        	         case 'r':
	        	         case 's':
	        	             System.out.print("7");
	        	             break;
	        	             
	        	         case 't':
	        	         case 'u':
	        	         case 'v':
	        	             System.out.print("8");
	        	             break;
	        	             
	        	         case 'w':
	        	         case 'x':
	        	         case 'y':
	        	         case 'z':
	        	            System.out.print("9");
	        	             break;             
	        	}
	        	
	        }
	        System.out.printf(" %nTo process another telephone number, enter Y/y%n");
			System.out.println("Enter any other letter to terminate the program.");
	    }
		

	}

}
