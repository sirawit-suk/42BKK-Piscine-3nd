#include <unistd.h>
//#include <stdio.h>

int main()
{

	int x = 5;
	int y = 1;
	
	//row
	int i = 1;
	while(i <= x)
	{
		//column
		int j = 1;
		while(j <= y)
		{
			if( (i==1 || i==x) || (j==1 || j==y) ) // check border
			{
				if((i==1 || i==x) && (j==1 || j==y)) //check corner
				{
					if((i == 1 && j == 1) || (i == x && j == y)) 
					{
						write(1, "/", 1);  //up left (1,1), down right (x,y)
					}
					else
					{
						write(1, "\\", 1); //up right (1,y), down left (x,1)
					}				
				}
				else
				{
					write(1, "*", 1); // print border
				}
			}
			else
			{
				write(1, " ", 1); // print body
			}
			j++;
		}
		write(1, "\n", 1); // new line
		i++;
	}
	
}
