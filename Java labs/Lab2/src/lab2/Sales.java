package lab2;

//import java.io.FileNotFoundException;
//import java.io.FileReader;
//import java.io.PrintWriter;

import java.io.*;
import java.util.Scanner;

public class Sales {

	public static void main(String[] args) throws FileNotFoundException {

		int product, random;
		double price = 0, totalPrice, totalSales = 0;
		String name;

		Scanner inFile = new Scanner(new FileReader("sales.txt"));

		PrintWriter outFile = new PrintWriter("salesOut.txt");

		while (inFile.hasNext()) {
			product = inFile.nextInt();
			name = inFile.nextLine();
			random = (int) (Math.random() * 50);

			switch (product) {
			case 1:
				price = 2.98;
				break;
			case 2:
				price = 4.50;
				break;
			case 3:
				price = 9.98;
				break;
			case 4:
				price = 4.49;
				break;
			case 5:
				price = 6.8;
				break;
			}
			
			totalPrice = price * random;
			totalSales += totalPrice;
			String tPrice = String.format("$%.2f",totalPrice); 
			//System.out.printf("Product %d : %-30s %3d %7s %n", product, name, random, tPrice);
			outFile.printf("Product %d : %-30s %3d %6.2f %n", product, name, random, totalPrice);
		}
		
		//System.out.printf("%nTotal Sales: $%.2f" ,totalSales);
		outFile.printf("%nTotal Sales: $%.2f" ,totalSales); //outFile.printf is not working
		
	}

}
