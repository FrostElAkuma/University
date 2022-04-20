package Lab0;

public class MyFirstLab {

	public static void main(String[] args) {
		
		for (int i = 1; i <= 100; i++)
		{
			int counter = 0;
			for (int j = 1; j <= 100; j++)
			{
				if(i%j == 0)
				{
					counter++;
				}
			}
			if(counter == 2) 
			{
				  System.out.println(i);
			}
		}
		System.out.println("Welcome to Java!");

	}

	/*public String toString() {

		

		//return "Circle(radius: "+radius+" , area: "+getArea()+")";



		return String.format("Circle(radius: %.2f , area: %.2f)", radius, getArea());

	}*/
}
