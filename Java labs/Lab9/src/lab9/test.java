package lab9;

public class test {

	public static void main(String[] args) {

		Rectangle rect1 = new Rectangle(5.0, 6.5);

		System.out.println(rect1);

		

		Box box1 = new Box(5.0, 6.5, 2.2);

		

		System.out.println(box1);

						

		System.out.println("The box area = " + box1.area());

		

		System.out.println("The box volume = " + box1.volume());

	}
	
	
}
