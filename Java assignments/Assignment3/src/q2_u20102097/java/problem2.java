package q2_u20102097.java;

public class problem2 {

	public static void main(String[] args) {

		int[][] list = new int[4][4];
		
		int max = 0, maxRow = 0, maxCol = 0;
		
		for(int i = 0; i<list.length; i++)
		{
			int count = 0; //Resetting the count for each row
			
			for(int j = 0; j<list[0].length; j++)
			{
				list[i][j] = (int)(Math.random() * 2); //Filling the array
				System.out.print(list[i][j] + " ");
				
				if(list[i][j] == 1)
				{
					count++;
				}
				
			}
			System.out.println();
			if (count > max)
			{
				max = count;
				maxRow = i;
			}
		}
		
		max = 0;
		
		for(int j = 0; j<list[0].length; j++)
		{
			int count = 0; //Resetting the count for each row
			
			for(int i = 0; i<list.length; i++)
			{

				if(list[i][j] == 1)
				{
					count++;
				}
				
			}
			
			if (count > max)
			{
				max = count;
				maxCol = j;
			}
		}
		
		System.out.printf("The largest row index: %d %n", maxRow);
		System.out.printf("The largest column index: %d", maxCol);
	}

}//Thank you as always for your hard work and detailed feedback ! :D
