package q3_20102097.java;

import java.util.Scanner;

public class TestAccount {

	public static void main(String[] args) {
		
		Account[] a1 = new Account[10];
		
        for (int i = 0; i < 10; i++) 
            a1[i] = new Account(i, 100);
        

        System.out.print("Enter an id: ");
        
        Scanner input = new Scanner(System.in);
        int id = input.nextInt();
        
        if (id < 1 || id > 10) 
        {
            id = invalidId(id);
        }
        
        //Infinite while loop
        while (true) 
        {
        	
        	System.out.printf("%nMain menu%n");
            System.out.println("1: check balance");
            System.out.println("2: withdraw");
            System.out.println("3: deposit");
            System.out.println("4: exit");
            System.out.print("Enter a choice: ");
            
            int option = input.nextInt();

            if (option == 4) 
            {
                System.out.print("Enter an id: ");
                id = input.nextInt();

                if (id < 1 || id > 10) {
                    id = invalidId(id);
                }
            }
            //a1 - 1 cuz account 1 us has an index of 0
            switch (option) {
            case 1: 
                System.out.printf("The balance is %.1f",a1[id - 1].getB());
                break;
            case 2:
                System.out.print("Enter an amount to withdraw: ");
                a1[id - 1].withdraw(input.nextDouble());
                break;
            case 3:
                System.out.print("Enter an amount to deposit: ");
                a1[id - 1].deposit(input.nextDouble());
                break;
            default:
                break;
        }
        }
        
	}
	//using a function since this code is repeated twice
	public static int invalidId(int id) 
	{
		 	Scanner input = new Scanner(System.in);
	        while (id < 1 || id > 10) 
	        {
	        	System.out.print(" enter a correct id: ");
	            id = input.nextInt();
	            System.out.println();
	        }
	        return id;
	}

}
