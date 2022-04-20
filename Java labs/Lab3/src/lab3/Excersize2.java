package lab3;

public class Excersize2 {

	public static void main(String[] args) {
		
		char A,B,C;
		int x;
		x = (int)(Math.random()*(Math.pow(10, 4)));
		A = (char)(Math.random()*('Z' - 'A' + 1)+ 'A');
		B = (char)(Math.random()*('Z' - 'A' + 1)+ 'A');
		C = (char)(Math.random()*('Z' - 'A' + 1)+ 'A');
		
		//System.out.print(A);
		System.out.printf("%c%c%c%d",A , B , C , x);

	}

}
