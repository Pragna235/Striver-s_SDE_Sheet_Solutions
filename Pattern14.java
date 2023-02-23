//pattern14
		public static void pattern14(int n)
		{
			for (int row=n; row>=1 ; row--)
			{
			for (int sp = row; sp < n ; sp++)
			{
			System.out.print(" ");
			}
			for (int col = 1; col <= (2*row -1) ;col++)
			{
			if(col==1 || row == n || col==(2*row-1))
			{
			System.out.print("*");
			}
			else
			{
			System.out.print(" ");
			}
			}
			System.out.println();
			}
		}

