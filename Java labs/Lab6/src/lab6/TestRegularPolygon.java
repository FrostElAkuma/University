package lab6;

import lab6.RegularPolygon;

public class TestRegularPolygon {

	public static void main(String[] args) {
		RegularPolygon p1 = new RegularPolygon(); 
		System.out.println(p1);//automatically invokes toString() method
		
		RegularPolygon p2 = new RegularPolygon(6, 4); 
		System.out.println(p2);
		
		RegularPolygon p3 = new RegularPolygon(10, 4, 5.6, 7.8); 
		System.out.println(p3);
		
		//Thank you for your hard work and detailed feedback on every lab ! :D
	}

}
