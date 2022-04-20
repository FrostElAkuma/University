package lab5;

public class FanTest {

	public static void main(String[] args) {

		Fan f1 = new Fan(); 
		System.out.println("Fan 1");
		f1.set(3, true, 10, "yellow");
		
		System.out.println(f1);//automatically invokes toString() method
		
		Fan f2 = new Fan(); 
		f2.set(1, false, 5, "blue");
		System.out.println("\nFan 2");
		System.out.println(f2);

	}

}
