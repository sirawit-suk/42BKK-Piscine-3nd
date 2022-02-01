#include <stdio.h>
#include <unistd.h>

// basic
void	insert_zero(int num[][4])
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			num[i][j] = 0;
			j++;
		}
		i++;
	}
}

void		print2d(int num[][4])
{
	int i;
	int j;
	char c;
	
	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = num[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void		print1d(int num[])
{
	int i;
	char c;
	
	i = 0;
	while (i < 16)
	{
		c = num[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1,str, 1);
		str++;
	}
}

int ft_strlen(char *str)
{
	int i;
	
	i =0;
	while(*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int insert_constraint(int *constraint, char *str)
{
	int i;
	int j;
	
	if(ft_strlen(str) != 31)
	{
		ft_putstr("Error 92");
		return 0;
	}
	
	i = 0;
	j = 0;
	while (*str != '\0')
	{
		if(i % 2 == 0)
		{
			if(!(*str >= '1' && *str <= '4'))
			{
				ft_putstr("Error 104");
				return 0;
			}
			else
			{
				constraint[j] = *str - '0';
			}	
			j++;
		}
		else if(i % 2 == 1)
		{
			if(*str != ' ')
			{
				ft_putstr("Error 117");
				return 0;
			}
		}
		str++;
		i++;
	}
	return (1);
}

// algorithm
void insert_before(int num[][4], int *constraint)
{
	int i;
	int k;
	
	i = 0;
	while(i < 4)
	{
		if(constraint[i] == 4 && constraint[i+4] == 1)
		{
			k = 0;
			while (k <= 3)
			{
				num[k][i] = k+1;
				k++; 
			}
		}else if(constraint[i] == 1 && constraint[i+4] == 4)
		{
			k = 3;
			while (k >= 0)
			{
				num[k][i] = k+1;
				k--; 
			}
		}
		i++;
	}
	
	i = 0;
	while(i < 4)
	{
		if(constraint[8+i] == 4 && constraint[8+i+4] == 1)
		{
			k = 0;
			while (k <= 3)
			{
				num[i][k] = k+1;
				k++; 
			}
		}else if(constraint[8+i] == 1 && constraint[8+i+4] == 4)
		{
			k = 3;
			while (k >= 0)
			{
				num[i][k] = k+1;
				k--; 
			}
		}
		i++;
	}
	
	i = 0;
	while(i < 4)
	{
		if(constraint[i] == 1)
			num[0][i] = 4;
		i++;
	}
	i = 0;
	while(i < 4)
	{
		if(constraint[4+i] == 1)
			num[3][i] = 4;
		i++;
	}
	i = 0;
	while(i < 4)
	{
		if(constraint[8+i] == 1)
			num[i][0] = 4;
		i++;
	}
	i = 0;
	while(i < 4)
	{
		if(constraint[12+i] == 1)
			num[i][3] = 4;
		i++;
	}

		 
}

// Main
int	main(void)
{
	int num[4][4];
	int constraint[16];
	
	if (insert_constraint(constraint, "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 4") == 0)
	{
		return (0);
	}
	insert_zero(num);
	print1d(constraint);
	print2d(num);
	insert_before(num, constraint);
	print2d(num);
}
